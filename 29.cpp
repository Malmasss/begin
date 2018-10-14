#include <iostream>
#define PI 3.1415926535

long double r(int a)
{
	if (a>0&&a<=360)
	{
		std::cout << "Radian = " << (a*PI)/180 << std::endl;
	}

	else {std::cout << "nev";}

	return 0;
}

int main()
{
	int a;
	std::cin >> a;

	r(a);

	return 0;
}
