#include <iostream>
#include <cmath>

int f(int a, int b)
{
	return abs(b - a);
}
int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	std::cout <<"Расстояние = " << f(a,b) <<std::endl;
	return 0;
}
