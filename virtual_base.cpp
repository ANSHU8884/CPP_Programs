#include<iostream>
class power
{
public:
	int pw;
	power(int pw=10)
	{
		this->pw = pw;
		std::cout << pw << std::endl;
	}
};
class scanner :virtual public power
{
public:
	int sc;
	scanner(int pw=10,int sc=20):power(pw)
	{
		this->sc = sc;
		std::cout << sc << std::endl;
	}
};
class printer :virtual public power
{
public:
	int pr;
	printer(int pw=10, int pr=30) : power(pw)
	{
		this->pr = pr;
		std::cout << pr << std::endl;
	}
};
class xerox :public scanner, public printer
{
public:
	xerox(int pw=10, int sc=20, int pr=30) : scanner(pw, sc), printer(pw, pr)
	{

	}
};
int main()
{
	xerox x; 
	return 0;
}