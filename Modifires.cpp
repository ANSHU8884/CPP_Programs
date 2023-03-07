#include<iostream>
class demo
{
public:
	int a = 10;

private:
	int b = 20;
protected:
	int c=30;
	void fun()
	{
		std::cout << a << std::endl;
	}
};
class test    //another class like dindi
{
public:
	int e = 40;
	demo d;
	void gun()
	{
		std::cout << d.a << std::endl;
	}
};
class child :demo
{
public:
	void gun()
	{
		std::cout <<a << std::endl;
		std::cout <<c << std::endl;

	}
};
int main()
	{
	test t;
	
	t.gun();
	child c;
	c.gun();
		return 0;
	}

