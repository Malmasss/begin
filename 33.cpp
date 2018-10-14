#include <iostream>

void cena(int rub, int kg)
{
	std::cout << "Kg = " << kg <<std::endl;
	std::cout << "Cena za 1 kg =" << rub <<std::endl;

	for(int i = 1; i<=kg; ++i)
	{
		std::cout << "Za " << i << " kg= " <<i*rub <<std::endl;
	}

}

int main()
{
	int a,b;
	std::cin >> a;
	std::cin >> b;

	cena(a,b);

	return 0;
}
