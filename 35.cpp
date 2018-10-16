#include <iostream>

void s(int v, int u, int t1, int t2)
{
	int s1 = v+u;
	int s2 = v-u;
	std::cout << "Passed way (lake)= " << t1*v <<std::endl;
	std::cout << "Passed way (river)" <<std::endl;
	std::cout << "With the flow = " << t2*s1 <<std::endl;
	std::cout << "Without the flow = " << t2*s2 <<std::endl;
}

int main()
{
	int v = 0;
	int u = 0;
	int t1 = 0;
	int t2 = 0;

	std::cin >> v;
	std::cin >> u;
	std::cin >> t1;
	std::cin >> t2;
	s(v,u,t1,t2);

	return 0;
}

