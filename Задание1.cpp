#include <iostream>

int main() {
	double number{};//т.к пользователь может ввести любое число (дробное либо целое)
	std::cout << "Enter number: ";
	std::cin >> number;
	std::cout << "Your number: " << number << std::endl;

	return EXIT_SUCCESS;
}