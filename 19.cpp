#include <iostream>

int f(int y1, int y2)
{
	return abs(y1-y2);
}
int f1(int x1, int x2)
{
	return abs(x1-x2);
}
int f2(int f, int f1)
{
	return 2*(f+f1);
}
int f3(int f, int f1)
{
	return f*f1;
}
int main()
{
	int x1 = 10;
	int y1 = 10;
	int x2 = 30;
	int y2 = 25;

	std::cout << "S=" << f2(f(y1,y2), f1(x1,x2)) <<std::endl;
	std::cout << "P=" << f3(f(y1,y2), f1(x1,x2)) <<std::endl;
}

