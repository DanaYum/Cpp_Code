#include<iostream>
using namespace std;
class employee
{
    public:
    employee()
    {
        cout<<"I am employee"<<endl;
    }
    ~employee()
    {
        cout<<"Employee destroyed"<<endl;
    }
};
class company
{
    public:
    employee *emp;
    //company has-a employee
    company(employee *emp)
    {
        this->emp=emp;
        cout<<"this is company"<<endl;
        cout<<this->emp;
    }
    ~company()
    {
        cout<<"company destroyed"<<endl;
    }
};
int main()
{
    employee *e1=new employee;
    {
        company c1(e1);
    }
    //delete e1;
}