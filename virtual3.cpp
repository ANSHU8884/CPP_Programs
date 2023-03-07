#include<iostream>

class parent
{
public:
	parent()
	{
		std::cout << "parent constructor" << std::endl;
	}
	virtual ~  parent()
	{
		std::cout << "parent destructor" << std::endl;
	}
};
class child :public parent
{
public:
	child() :parent()
	{
		std::cout << "child constructor" << std::endl;
	}
	~child() 
	{
		std::cout << "child destructor" << std::endl;

	}
};
int main()
{
	parent *ptr = new child;
	delete ptr;
}