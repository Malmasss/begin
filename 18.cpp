#include <iostream>

int f(int a, int c)
{
	return abs(c-a);
}
int f1(int c, int b)
{
	return abs(c-b);
}
int f2(int f, int f1)
{
	return f*f1;
}

int main()
{
	int a = 100;
	int b = -50;
	int c = 10;
	std::cout << "A=" << a << ", B=" << b << ", C=" << c << std::endl;
	std::cout << "AC*BC="<< f2(f(a, c), f1(c, b))<<std::endl;
	return 0;
}

