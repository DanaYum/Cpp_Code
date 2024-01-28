#include<iostream>
using namespace std;
class Student
{
    public:
        char name[50];
        int roll_no;
        int reg_no;
    public:
        void display();
};
void Student::display()
{
    cout<<"\t\tname: "<<name<<endl;
    cout<<"\t\troll no: "<<roll_no<<endl;
    cout<<"\t\treg no: "<<reg_no<<endl;
}
int main()
{
    Student std[2];
    cout<<"enter name of std1: ";
    cin>>std[1].name;
    cout<<"enter roll no of std1: ";
    cin>>std[1].roll_no;
    cout<<"enter reg no of std1; ";
    cin>>std[1].reg_no;
    cout<<"enter name of std2: ";
    cin>>std[2].name;
    cout<<"enter roll no of std2: ";
    cin>>std[2].roll_no;
    cout<<"enter reg no of std2; ";
    cin>>std[2].reg_no;
    cout<<".....................................displaying info of std1......................................"<<endl;
    std[1].display();
    cout<<".....................................displaying info of std2......................................"<<endl;
    std[2].display();

}