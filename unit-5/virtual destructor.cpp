#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Constructing base"<<endl;
    }
    virtual ~base()
    {
        cout<<"Destructing base \n";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Constructing derived\n";
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