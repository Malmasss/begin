#include <iostream>
#include <cmath>

void equation(int x)
{
	std::cout << 3*(pow(x,6)) - 6*(pow(x,2)) - 7;
}

int main()
{
	int x;
	std::cin >> x;

	equation(x);

	return 0;
}
