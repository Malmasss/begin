#include <iostream>

int f(int a, int b)
{
	return (a+b)/2;
}

int main()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	std::cout << f(a, b) <<std::endl;
	return 0;
}
