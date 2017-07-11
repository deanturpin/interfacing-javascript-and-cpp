#include <iostream>

int main() {

	using namespace std;

	const string message =
		R"(
			{
				"firstName": "Mr.",
				"middleName": "Dean",
				"lastName": "Turpin"
			}
		)";

	// HTTP header
	cout << "Content-Type: text/text" << endl;
	cout << "Content-Length: " << message.size() + 1 << endl;
	cout << "" << endl;

	// The good stuff
	cout << message << endl;

	return 0;
}
