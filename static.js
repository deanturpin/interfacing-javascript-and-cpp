"use strict";

onload = function() {

	// Create a canvas element
	const canvas = document.createElement("canvas")

	// Add it to the DOM
	document.body.appendChild(canvas)

	// Define canvas (view port)
	const context = canvas.getContext("2d")

	// Set canvas size
	const width = canvas.width = window.innerWidth * .97
	const height = canvas.height = window.innerHeight * .91

	context.strokeStyle = "#2f5"

	// Circle wrapper
	function circle(x, y) {

		// Draw the circle
		context.beginPath()
		context.arc( x, y, 3, 0, 2 * Math.PI, false)
		context.stroke()
	}

	// Cartesian to polar conversion
	function cartesianToPolar(x, y) {

		const radius = height/6

		const _x = (radius + 400 * y/height) * Math.sin(2 * Math.PI * x/width) + width/2
		const _y = (radius + 400 * y/height) * Math.cos(2 * Math.PI * x/width) + height/2

		return { X:_x, Y:_y}
	}

	// Render a frame
	var displayList = []
	function render() {

		context.clearRect(0, 0, canvas.width, canvas.height)

		// Process display list
		for (var i in displayList) {

			var polar = cartesianToPolar(displayList[i][0], displayList[i][1])

			// Draw current plot
			circle(polar.X, polar.Y)
		}
	}

	// Create a new AJAX request
	var client = new XMLHttpRequest()
	const status = document.getElementById("status")

	// Set up handler for AJAX response
	client.onreadystatechange = function() {

		// Check the response is a good one
		if (this.readyState === 4 && this.status === 200) {

			// Parse as JSON
			const json = JSON.parse(client.responseText)

			// Create plots
			for (var i = 0; i < json.packets.length; ++i)
				displayList.push([
						json.packets[i].one * Math.random() * width,
						json.packets[i].two * (.4 + .2 * Math.random()) * height])

			status.innerText = "Packets " + json.packets.length
			requestAnimationFrame(render)
		}
	}

	client.open("GET", "cgi-bin/packet.json", true)
	client.send()
}
