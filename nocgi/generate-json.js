#!/usr/bin/node

console.log('{"type":"alpha","packets": [');

const maxPackets = 10;

for (var i = 0; i < maxPackets; ++i) {

	const a = Math.random();
	const b = Math.random();
	const c = Math.random();

	console.log('{"a":"' + a + '","b":"' + b + '","c":"' + c + '"}');

	if (i === maxPackets - 1)
		break;

	console.log(',');
}

	console.log(']}');
