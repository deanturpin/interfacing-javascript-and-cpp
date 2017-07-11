#include <iostream>

int main() {

	using namespace std;

	const string message =
		R"(
{
	"firstname": "Kenny",
	"lastname": "Ken"
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
