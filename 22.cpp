#include <iostream>

int change(int a, int b)
{
	int a1 = 0;
	a1=a;
	a=b;
	std::cout << a;
	return b=a1;
}

int main()
{
	int a,b;
	std::cin >> a;
	std::cin >> b;

	std::cout << change(a,b) <<std::endl;

	return 0;
}
