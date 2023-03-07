#include<iostream>
//templet class

template<class t1, class t2>
class demo
{
public:
	t2 fun(int a , t2 b)
	{
		return a * b;
	}
};
int main()
{
	demo<double ,double> d1;
	std::cout<<d1.fun(30,12.5);
	return 0;
}