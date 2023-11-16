#include <iostream>

int factorial (int);
void print(int);

int main()
{
	int x = 5;
	std::cout << factorial(x) << std::endl;
	print(x);
}

void print(int n)
{
	std::cout << n<< std::endl;
}
int factorial (int n) 
{
	int num = 1;
	for(int i = n; i > 1; --i) {
		num *= i;
	}
	return num;
}
