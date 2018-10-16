#include <iostream>
#define PI 3.14

double f(int d)
{
	return d*PI;
}
int main()
{
	int d;

	std::cin >> d;
	std::cout << f(d) <<std::endl;
	return 0;
}
