#include <iostream>
#include <cmath>

void f(int x1, int x2, int y1, int y2, int x3, int y3)
{
	int a1 = sqrt(pow(abs(x2-x1), 2) + pow(abs(y2-y1), 2));
	int a2 = sqrt(pow(abs(x3-x2), 2) + pow(abs(y3-y2), 2));
	int a3 = sqrt(pow(abs(x1-x3), 2) + pow(abs(y1-y3), 2));
	int p = (a1+a2+a3)/2;
	p=p*2;
	int a5 = sqrt(p*(p-a)*(p-b)*(p-c));
	std::cout << "P=" << p << "," << "S=" << a5 <<std::endl;
}
int main()
{
	int x1 = 10;
	int y1 = 10;
	int x2 = 40;
	int y2 = 30;
	int x3 = 25;
	int y3 = 30;

	std::cout<<"Otvet: "<< f(x1, x2, y1, y2) <<std::endl;
	return 0;
}

