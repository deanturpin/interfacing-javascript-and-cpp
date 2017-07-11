#include <iostream>

int main() {

	using namespace std;

	// HTTP header
	cout << "Content-Type: text/text\n" << endl;

	// The good stuff
	cout <<
		R"(
			{
				"firstName": "Dean",
				"lastName": "Turpin"
			}
		)";

	return 0;
}
