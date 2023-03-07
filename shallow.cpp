#include<iostream>
class demo
{
public:
    int a;
    int b;
    int *p;

    demo(int a, int b,int c)
    {
        this->a=a;
        this->b=b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=c;

    }

};
int main()
{
    demo d1(10,20,30);
	demo d2(d1);
    std::cout<<d1.a<<std::endl;
	std::cout<<d2.b<<std::endl;
    std::cout<<*(d1.p)<<std::endl;
	
	std::cout<<"After Change"<<std::endl;
	
	d2.a++;
	std::cout<<d2.a<<std::endl;
	d2.b++;
    std::cout<<(d2.b)<<std::endl;
	*(d2.p)++;
	std::cout<<*(d1.p)<<std::endl;
	
	//d2.a++;
	//std::cout<<d2.a<<std::endl;
	//d2.b++;
	//std::cout<<d2.b<<std::endl;
	//*(d2.p)++;
	//std::cout<<*(d2.p)<<std::endl;
    return 0;
}