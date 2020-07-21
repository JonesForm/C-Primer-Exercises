#include <iostream>

//answer will be 0.

int oneTwelve() {
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << sum;
	return 0;
}