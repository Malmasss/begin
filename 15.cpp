#include <iostream>
#include <cmath>
#define PI 3.14

double f(double s)
{
	double c = (s/PI)*4.0;
	return pow(c,1.0/2.0);
}
double f1(double f)
{
	return PI*f;
}

int main()
{
	double s = 9.0;
	std::cout << "L =" << f1( f(s) ) <<std::endl;
	std::cout << "D =" << f(s) <<std::endl;
	return 0;
}

