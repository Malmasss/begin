#include <iostream>

void cena(int p1, int kg1, int p2, int kg2)
{
	std::cout << "Weigth of chocolate candies= " << kg1 <<std::endl;
	std::cout << "Price for 1 kg chocolate candies= " << p1*kg1 <<std::endl;

	std::cout << "Weigth of toffee= " << kg2 <<std::endl;
	std::cout << "Price for 1 kg toffee= " << p2*kg2 <<std::endl;

	std::cout << "More expencive in " << (p1*kg1)/(p2*kg2) << " times" <<std::endl;

}

int main()
{
	int a,b,a1,b1;
	std::cout << "Enter p1: ";
	std::cin >> a;
	std::cout << "Enter kg1: ";
	std::cin >> b;
	std::cout << "Enter p2: ";
	std::cin >> a1;
	std::cout << "Enter kg2: ";
	std::cin >> b1;

	cena(a,b,a1,b1);

	return 0;
}
