#include<iostream>
using namespace std;
class operation
{
    int a,b,add;
    public:
        void get()//inline member function(inside the class whether it is mentioning or not by default it is inline)
        {
            cout<<"Enter first value:";
            cin>>a;
            cout<<"Enter second value:";
            cin>>b;
        }
        void sum();
}s;
inline void operation::sum()
{
    add=a+b;
    cout<<"Addition of two no:"<<a+b;
}
int main()
{
    cout<<"Program using inline function\n";
    s.get();
    s.sum();
    return 0;
}