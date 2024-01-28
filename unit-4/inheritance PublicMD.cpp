/*when the base class is publicly inherited by the derived class,
public members of the base class also become the public members of the derived
class.
Therefore, the public members of the base class are accessible by the objects of the
derived class as well as by the member functions of the derived class.*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    void get_rno()
    {
        cout<<"\nEnter roll number:";
        cin>>roll_no;
    }
    void show_rno()
    {
        cout<<"\nRoll no:"<<roll_no;
    }
};
class result:public student
{
    private:
    float fees;
    public:
    void get_data()
    {
        get_rno();
        cout<<"\nEnter fees:";
        cin>>fees;
        cout<<"\nEnter section:";
        cin>>section;
    }
    void display()
    {
        show_rno();
        cout<<"\nFees:"<<fees;
        cout<<"\nSection:"<<section;
    }
};
int main()
{
    result obj1;
    obj1.get_data();
    obj1.display();
    /*  obj1.get_rno();//Possible---Public
        obj1.show()_rno();//Possible---Public
        strcpy(obj1.section,"K22DR")//Not possible---Protected
    */

}