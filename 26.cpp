#include <iostream>
#include <cmath>

void equation(int x)
{
	std::cout << 4*pow(x-3,6) - 7*pow(x-3,3) + 2;
}

int main()
{
	int x;
	std::cin >> x;
	equation(x);

	return 0;
}

