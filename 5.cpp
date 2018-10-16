#include <iostream>

int v(int a)
{
	return a*a*a;
}

int s(int a)
{
	return 6*(a*a);
}

int main()
{
	int a;

	std::cin >> a;
	std::cout << "V=" << v(a) <<std::endl;
	std::cout << "S=" << s(a) <<std::endl;

	return 0;
}
