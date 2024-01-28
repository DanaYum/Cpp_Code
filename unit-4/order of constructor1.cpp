#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\ncalling default base class constructor";
    }
    ~A()
    {
        cout<<"\ncalling base class destructor";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\nCalling default derived class constructor";
    }
    ~B()
    {
        cout<<"\nCalling derived class destructor";
    }
};
int main()
{
    B obj1;
    return 0;
}