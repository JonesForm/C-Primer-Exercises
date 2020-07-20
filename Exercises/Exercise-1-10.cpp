#include <iostream>

int oneTen() {
	int count = 10;
	while (count > -1)
	{
		std::cout << count << std::endl;
		count--;
	}
	std::cin.get(); // added to keep the console open to view.
	return 0;
}