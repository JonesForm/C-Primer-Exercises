#include <iostream>

//int main() {
//	std::cout << "Enter two numbers :" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The sum of " << v1;
//	<< " and " << v2;
//	<< " is " << v1 + v2 << std::endl;
//	return 0;
//}

// The following fragment will not work as each line has been ended with ;
// so the compiler doesnt know to cantinue using std::cout so we get a sytax error.

// how it should be written.

#include <iostream>

int oneSix() {
	std::cout << "Enter two numbers :" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;
	return 0;
}