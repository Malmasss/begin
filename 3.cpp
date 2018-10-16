#include <iostream>

int s(int a, int b)
{
	return a*b;
}

int p(int a, int b)
{
	return 2*(a+b);
}

int main()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	std::cout << "P=" << p(a,b) <<std::endl;
	std::cout << "S=" << s(a,b) <<std::endl;

	return 0;
}
