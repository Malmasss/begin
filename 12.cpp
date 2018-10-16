#include <iostream>
#include <cmath>

int f1(int a, int b)
{
	return sqrt( pow(a, 2) - pow(b, 2) );
}
int f2(int a, int b, int f1)
{
	return a+b+f1;
}
int main()
{
	int a = 10;
	int b = 5;

	std::cout << "c=" << f1(a, b) << ", P=" << f2(a, b, f1(a, b)) << "." <<std::endl;
	return 0;
}
