//private can be accessible only within the class where as protected can be accessible inside the class as well
//as in its child classes.
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
class result:protected student
{
    private:
    float fees;
    public:
    void get_data()
    {
        get_rno();//becomes protected
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
    /*  obj1.get_rno();//It won't work
        obj1.show()_rno();//It won't work
        strcpy(obj1.section,"K22DR")//Not possible
    */

}