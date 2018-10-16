#include <iostream>
#include <cmath>
#define PI 3.14

int f(int r1)
{
	return PI*pow(r1,2);
}
int f1(int r2)
{
	return PI*pow(r2,2);
}
int f2(int f, int f1)
{
	return f - f1;
}

int main()
{
	int r1 = 10;
	int r2 = 6;

	std::cout << "S1 =" << f(r1) <<std::endl;
	std::cout << "S2 =" << f1(r2) <<std::endl;
	std::cout << "S3 =" << f2(f(r1), f1(r2)) << std::endl;

	return 0;
}

