#include <iostream>
#define PI 3.14

double l(int r)
{
	return 2*PI*r;
}

double s(int r)
{
	return PI*r*r;
}

int main()
{
	int r;

	std::cin >> r;

	std::cout << "L=" << l(r) <<std::endl;
	std::cout << "S=" << s(r) <<std::endl;

	return 0;
}
