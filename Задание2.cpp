#include <iostream>
#include <string>
int main() {
	std::string string;
	std::cout << "Enter word: ";
	std::cin >> string;//т.к вводит одно слово используем метод std::cin;
	std::cout << "Your word: " << string << std::endl;

	return EXIT_SUCCESS;
}