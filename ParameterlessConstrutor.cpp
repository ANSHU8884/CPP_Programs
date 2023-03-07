#include<iostream>
class demo
{
public:
	int a;
	int b;


	demo()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	demo d1;
	std::cout << d1.a << std::endl << d1.b << std::endl;
	return 0;
}