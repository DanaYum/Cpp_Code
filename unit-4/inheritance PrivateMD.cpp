/*When a base class is privately inherited by the derived class, public members of the
base class becomes the private members of the derived class and therefore, the
public members of the base class can only be accessed by the member functions of
the derived class.
They are inaccessible to the objects of the derived class.
*/
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
class result:private student
{
    private:
    float fees;
    public:
    void get_data()
    {
        get_rno();//becomes private
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
    /*  obj1.get_rno();//It won't work---Private data
        obj1.show()_rno();//It won't work---Private data
        strcpy(obj1.section,"K22DR")//Not possible---Private
    */

}