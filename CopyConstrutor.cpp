#include<iostream>
class demo
{
public:
	int a;
	int b;
	int c;
	int* p;


	demo(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->p = (int*)malloc(sizeof(int));
		*(this->p) = c;
	}

	demo()
	{

	}

};

int main()
{
	demo d1(10,50,700);
	std::cout << d1.a << std::endl << d1.b << std::endl <<*(d1.p)<< std::endl;

	demo d2(d1);
	std::cout << d2.a << std::endl << d2.b << std::endl << *(d2.p) << std::endl;
	(d1.a)++;
	(d1.b)++;
	(*(d1.p))++;

	return 0;
}


