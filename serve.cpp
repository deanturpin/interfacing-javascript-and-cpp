#include <sstream>
#include <iostream>

int main() {

	using namespace std;

	// HTTP header
	cout
		<< "Content-Type: application/json; charset=utf-8\n"
		<< "Connection: Closed\n"
		<< "\n";

	stringstream message;

	message << R"({ "type": "alpha", "packets": [)";

	const int totalPackets = 1000;

	for (int i = 0; i < totalPackets; ++i) {

		message << "{";
		message << "\"one\": \"" << 1 << "\",";
		message << "\"two\": \"" << 1 << "\",";
		message << "\"ten\": \"" << 1 << "\"";
		message << "}";

		if (i < totalPackets - 1)
			message << ",";
	}

	message << "]}";

	// The good stuff
	cout << message.str() << endl;

	return 0;
}
