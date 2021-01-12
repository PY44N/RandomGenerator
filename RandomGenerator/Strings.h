#include <iostream>

void Strings() {
	int length;
    std::string out;
	std::cout << "Length: ";
	std::cin >> length;

    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < length; ++i) {
        out += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    std::cout << "Your string is " << out;
}