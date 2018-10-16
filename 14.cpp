#include <iostream>
#include <cmath>
#define PI 3.14

double f(double l)
{
	return l/2.0*PI;
}
double s(double f)
{
	return PI*pow(f,2.0);
}

int main()
{
	double l = 12.0;
	std::cout << "R=" << f(l) <<std::endl;
	std::cout << "S=" << s( f(l) ) <<std::endl;
	return 0;
}
