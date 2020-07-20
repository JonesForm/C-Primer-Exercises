#include <iostream>

int oneEight() {
	std::cout << "/*" << "does not comment but runs" << std::endl;
	std::cout << "*/" << "same as previous" << std::endl;
	std::cout << /* "/*" */ "comments but wont run without this text after changing 2nd comment to /*" << std::endl;
	std::cout << /* "/*" /* "/*" */ "same as previous" << std::endl;
	return 0;
}