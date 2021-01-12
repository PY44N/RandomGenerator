#include <iostream>

#include "Numbers.h"
#include "Strings.h"

int main()
{
    system("CLS");

    std::cout << "What would you like to generate?\n    (1): Numbers\n    (2): Strings" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 1) Numbers();
    else if (choice == 2) Strings();
    else main();
}