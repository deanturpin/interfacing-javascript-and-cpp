#include <iostream>

int main() {

	using namespace std;

	const string message =
		R"(
{
	"type": "alpha",
	"packets": [
		{
			"one": "0.1",
			"two": "0.2",
			"ten": "0.1"
		},
		{
			"one": "0.1",
			"two": "0.3",
			"ten": "0.1"
		},
		{
			"one": "0.3",
			"two": "0.2",
			"ten": "0.4"
		},
		{
			"one": "0.3",
			"two": "0.6",
			"ten": "0.8"
		},
		{
			"one": "0.5",
			"two": "0.8",
			"ten": "0.11"
		}
	]
}
		)";

	// HTTP header
	cout
		<< "Content-Type: text/plain\n"
		<< "Content-Length: " << message.size() + 1 + "\n"
		<< "Connection: Closed\n"
		<< "\n";

	// The good stuff
	cout << message << endl;

	return 0;
}
