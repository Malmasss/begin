#include <iostream>

int v(int a, int b, int c)
{
	return a*b*c;
}
int s(int a, int b, int c)
{
	return 2*(a*b + b*c + a*c);
}
int main()
{
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::cout << "V=" << v(a, b, c) <<std::endl;
	std::cout << "S=" << s(a, b, c) <<std::endl;

	return 0;
}
