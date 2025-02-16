#include <iostream>
#include "utils.hpp"

int main() {
	int a, b;
	std::cout << "Write 1st number: ";
	std::cin >> a;
	std::cout << "Write 2nd number: ";
	std::cin >> b;
	std::cout << "Addition: " << add(a, b) << std::endl;
	std::cout << "Subtraction: " << subtract(a, b) << std::endl;
	std::cout << "The result of multiplication: " << multiply(a, b) << std::endl;
}