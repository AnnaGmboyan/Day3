#include <iostream>


int Fact(int);


int main()
{
	int num = 5;
	std::cout << Fact(num) << std::endl;
	std::cout << Fact(num + 2) << std::endl;
	return 0;
}

int Fact(int n) 
{
	return (n +1)*10;
}
