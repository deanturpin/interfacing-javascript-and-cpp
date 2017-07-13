#include <sstream>
#include <iostream>

int main() {

	using namespace std;

	// HTTP header
	cout
		<< "Content-Type: text/plain\n"
		// << "Content-Length: " << to_string(message.size() + 1) + "\n"
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

	message << R"(]})";

	// The good stuff
	cout << message.str() << endl;

	return 0;
}
