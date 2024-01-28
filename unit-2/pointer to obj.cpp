#include<iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    public:
    void getdata()
    {
        cout<<"enter name and age: ";
        cin>>name>>age;
    }
    void display()
    {
        cout<<name<<"\t"<<age;
    }
};
int main()
{
    person x, *ptr;
    ptr=&x;
    ptr->getdata();
    ptr->display();
    cout<<endl;
    //(*ptr).getdata();
    //(*ptr).display();
    return 0;
}