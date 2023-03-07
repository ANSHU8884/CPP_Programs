#include<iostream>
class demo
{
public:
	const int a;
	mutable int b;
	demo() : a(10), b(20)
	{
		int b;
	}
    void fun() const
	{
		std::cout << a << std::endl;
	}
	void display()
	{	 
		std::cout << b<< std::endl;
	}
};
int main()
{
	demo d;
	const int a = 10;
	int* p = const_cast<int*>(&a);
	d.fun();
	d.b++;
	d.display();
	return 0;
}