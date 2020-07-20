#include <iostream>

int oneNine() {
	int sum = 0;
	int val = 50;
	while (val < 101)
	{
		sum += val;
		val++;
	}
	std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;
	return 0;
}