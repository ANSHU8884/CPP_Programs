
#include <iostream>
class parent
{
public:
    int a;
private:
    int b;
protected:
    int c;

    parent()
    {
        this->a = 10;
        this->b = 20;
        this->c = 30;
    }
};
class child :public parent
{
public:
    int x;
private:
    int y;
protected:
    int z;
    public:child()
    {
        this->x = 40;
        this->y = 50;
        this->z = 60;
    }
};
int main()
{
    child c1;
    std::cout << c1.a << std::endl;
    std::cout << c1.x << std::endl;
    return 0;
}
