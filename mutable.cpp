#include<iostream>
class demo
{
public:
   mutable int a;
    int b;

    demo()
    {
        a=10;
        b=20;
    }
    public:
    void show() const
    {
        a=40;                   //mutable change the value in const method
        std::cout<<a<<std::endl;
        std::cout<<b<<std::endl;
    }
};
int main()
{
    demo d1;
    d1.show();
    return 0;
}
