#include <iostream>

int main() {
	int total = 0, input = 0;
	std::cout << "enter numbers to add together when done." << std::endl;
	std::cout << "for windows press CTRL + Z then ENTER" << std::endl;
	std::cout << "for linux/mac press CTRL + D then ENTER" << std::endl;
	while (std::cin >> input)
	{
		total += input;
	}
	std::cout << "The Total is: " << total << std::endl;
	return 0;
}