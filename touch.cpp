#include <iostream>

int factorial (int);

int main()
{
	int x = 5;
	std::cout << factorial(x) << std::endl;
}

int factorial (int n) 
{
	int num = 1;
	for(int i = n; i > 1; --i) {
		num *= i;
	}
	return num;
}
