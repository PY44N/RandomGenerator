#include <iostream>
#include <string>

void Numbers() {
	int min;
	int max;
	std::string out;

	std::cout << "Minimum number: ";
	std::cin >> min;

	std::cout << "Maximum number: ";
	std::cin >> max;

	out = std::to_string(rand() % (max - min) + min);

	std::cout << "Your number is " << out;
}