#include<iostream>
using namespace std;
class BC
{
    public:
    void show()
    {
        cout<<"\nshow() of base class"<<endl;
    }
};
class DC:public BC
{
    public:
    void show()
    {
        cout<<"\nshow() of derived class";
        cout<<endl;
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"\n------Early Binding---------"<<endl;
    cout<<"bptr points to base objects\n";
    bptr->show();//Base class show is called
    //derived class
    DC derived;
    //DC *bptr2;
    bptr=&derived;
    cout<<"bptr now points to derived objects";
    cout<<endl;
    bptr->show();//Base class show is called
    return 0;
}