#include <iostream>

int change(int a, int b, int c)
{
	int b1 = a;
	int a1 = c;
	int c1 = b;
	std::cout << a1 << " " << b1 << " " << c1 <<std::endl;
}

int main()
{
	int a,b,c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	change(a,b,c);

	return 0;
}
