#include <iostream>

int change(int a, int b, int c)
{
	int b1 = c;
	int a1 = b;
	int c1 = a;
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
