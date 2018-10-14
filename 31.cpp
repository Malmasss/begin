#include <iostream>

void temperature(int t)
{
	std::cout << "T^c = " << (t-32)*5/9 <<std::endl;
}

int main()
{
	int a;
	std::cin >> a;

	temperature(a);

	return 0;
}
