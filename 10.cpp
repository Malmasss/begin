#include <iostream>
#include <cmath>

int f(int a, int b)
{
	return pow(a,2)+pow(b,2);
}

int f1(int a, int b)
{
	return pow(a,2)-pow(b,2);
}

int f2(int a, int b)
{
	return pow(a,2)*pow(b,2);
}

int  f3(int a, int b)
{
	return pow(a,2)/pow(b,2);
}
int abs(int a, int b)
{
	return abs(a)-abs(b);
}
int abs1(int a, int b)
{
	return abs(a)+abs(b);
}
int abs2(int a, int b)
{
	return abs(a)*abs(b);
}
int abs3(int a, int b)
{
	return abs(a)/abs(b);
}
int main()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	std::cout << "C kvadratami: "<<std::endl;
	std::cout << f(a, b) <<std::endl;
	std::cout << f1(a, b) <<std::endl;
	std::cout << f2(a, b) <<std::endl;
	std::cout << f3(a, b) <<std::endl;
	std::cout << "C modulyami: "<<std::endl;
	std::cout << abs(a, b) <<std::endl;
	std::cout << abs1(a, b) <<std::endl;
	std::cout << abs2(a, b) <<std::endl;
	std::cout << abs3(a, b) <<std::endl;

	return 0;
}

