#include <iostream>

int main() {

	using namespace std;

	const string message =
		R"(
{
	"type": "a",

	"packets": [
		{
			"one": "1",
			"two": "2",
			"ten": "10"
		},
		{
			"one": "10",
			"two": "3",
			"ten": "10"
		},
		{
			"one": "5",
			"two": "8",
			"ten": "11"
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
