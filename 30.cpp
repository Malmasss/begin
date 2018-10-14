#include <iostream>
#define PI 3.1415926535

long double r(int a)
{
	if (a>0&&a<=2*PI)
	{
		std::cout << "Gradus = " << (a*180)/PI << std::endl;
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
