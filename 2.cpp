#include <iostream>

int f(int a)
{
	return a*a;
}
int main()
{
	int a;
	std::cin >> a;
	std::cout << f(a) <<std::endl;
	return 0;
}
