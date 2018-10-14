#include <iostream>

void temperature(int t)
{
	std::cout << "T^f = " << (t*9/5)+32 <<std::endl;
}

int main()
{
	int a;
	std::cin >> a;

	temperature(a);

	return 0;
}
