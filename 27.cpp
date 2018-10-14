#include <iostream>

void pow (int a)
{
	a = a*a;
	int a1 = a*a;
	std::cout << a << "  " << a1 << "  " <<a1*a1;
}

int main()
{
	int a;
	std::cin >> a;
	pow(a);

	return 0;
}

