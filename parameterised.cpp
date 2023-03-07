#include<iostream>

class demo
{
public:
	int a;
	int b;
	
	demo(int a,int b)
	{
		this->a = a;
		this->b = b;
	}

};

int main()
{
	demo d1(10,20);
	std::cout << d1.a << std::endl << d1.b << std::endl ;

	return 0;
}