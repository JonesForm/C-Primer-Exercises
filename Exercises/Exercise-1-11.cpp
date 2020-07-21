#include <iostream>

int oneEleven() {
	std::cout << "Enter 2 numbers and we will give you all the numbers in rage" << std::endl;
	int start = 0, finish = 0;
	std::cin >> start >> finish;
	while (start < finish + 1)
	{
		std::cout << start << std::endl;
		start++;
	}
	std::cin.get();
	return 0;
}