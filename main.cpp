#include <iostream>

int main() {
	int a, b, r;
	char choice = ' ';
	while (true) {
		std::cout << "Enter 'a' for addition or 'm' for multiplication: ";
		std::cin >> choice;
		if (choice == 'a' || choice == 'A' || choice == 'm' || choice == 'M')
			break;
		else
			std::cout << "Invalid choice." << std::endl;
	}
	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "Enter the second number: ";
	std::cin >> b;
	switch(choice) {
		case 'a':
		case 'A':
			r = a + b;
			break;
		case 'm':
		case 'M':
			r = a * b;
			break;
	}
	std::cout << "The result is " << r << std::endl;
	std::cout << "Goodybe" << std::endl;
	return 0;
}