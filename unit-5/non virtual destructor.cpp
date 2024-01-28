#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Constructed base"<<endl;
    }
    ~base()
    {
        cout<<"Destructing base \n";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Constructed derived\n";
    }
    ~derived()
    {
        cout<<"destructing derived\n";
    }
};
int main()
{
    base *b=new derived;
    delete b;
    return 0;
}