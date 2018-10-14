#include <iostream>

void pow(int a)
{
	int a1 = a*a;
	int a2 = a*a*a*a*a;
	std::cout << a1 << "  " << a*a*a << "  " << a2 << "  " << a2*a2 << "  " << a2*a2*a2 <<std::endl;
}

int main()
{
	int a;
	std::cin >> a;
	pow(a);

	return 0;
}

