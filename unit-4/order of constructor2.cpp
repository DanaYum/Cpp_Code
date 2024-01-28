#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)
    {
        x=a;
        cout<<"\ncalling base class parameterized "<<x;
    }
    ~A()
    {
        cout<<"\ncalling base class destructor A";
    }
};
class B:public A
{
    int y;
    public:
    B(int p):A(p)
    {
        y=p;
        cout<<"\nCalling derived class parameterized "<<y;
    }
    ~B()
    {
        cout<<"\nCalling derived class destructor B";
    }
};
int main()
{
    B obj(3);
    return 0;
}