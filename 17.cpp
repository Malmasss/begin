#include <iostream>

int f(int a, int c)
{
	return abs(c-a);
}
int f1(int b, int c)
{
	return abs(c-b);
}
int f2(int f, int f1)
{
	return f+f1;
}
int main()
{
	int a = 20;
	int b = 40;
	int c = 100;
	std::cout<<"Сумма отрезков АС И ВС =" << f2(f(a, c), f1(b, c))<<std::endl;
	return 0;
}
