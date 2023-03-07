#include<iostream>

class demo
{
	public:
	int a;
	int b;
	int *p;
	
	demo(int a, int b, int c)
	{
	this->a=a;
	this->b=b;
	this->p=(int*)malloc(sizeof(int));
	*(this->p)=c;
	}
	
	demo(const demo& other)
	{
	this->a=other.a;
	this->b=other.b;
	this->p=(int*)malloc(sizeof(int));
	*(this->p)= *(other.p);
	}
};
int main()
{
	demo d1(10,20,30);
	demo d2(d1);
	std::cout<<d1.a<<std::endl;
	std::cout<<d1.b<<std::endl;
	std::cout<<*(d1.p)<<std::endl;
	std::cout<<"after copy"<<std::endl;
	
	(d2.a)++;
	(d2.b)++;
	*((d1.p))++;
	
	//(d2.a)++;
	std::cout<<d2.a<<std::endl;
	//(d2.a)++;
	std::cout<<d2.b<<std::endl;
	//*((d1.p))++;
	std::cout<<*(d2.p)<<std::endl;
	(d2.a)++;
	(d2.b)++;
	*((d1.p))++;
	
	return 0;
}