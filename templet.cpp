#include<iostream>
//templet for nacked function
template<class T>
T fun(T a, T b)
{
    return a * b;
}
int main()
{
    std::cout << fun(10, 20) << std::endl;
    return 0;
}