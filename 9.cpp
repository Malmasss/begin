#include <iostream>
#include <cmath>

double f(int a, int b)
{
	return sqrt(a*b);
}

int main()
{
	int a,b;
	std::cin >> a;
	std::cin >> b;
	std::cout << f(a,b);

	return 0;
}
