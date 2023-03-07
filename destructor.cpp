#include<iostream>

class A
{
	public:
	~A()
	{
		std::cout<<"CLass A distructor"<<std::endl;
	}
	A()
	{
	std::cout<<"CLass A Constructor"<<std::endl;
	}
	~A()
	{
		std::cout<<"CLass A distructor"<<std::endl;
	}
};
int main()
{
	A a;
	
	return 0;
}