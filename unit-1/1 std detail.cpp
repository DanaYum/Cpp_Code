#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
        int roll,reg_no;
        char name[50];
    public:
        void getdetail();
        void display(); 
    
};
void Student::getdetail()
{
    cout<<"name:";
    cin>>name;
    cout<<"roll no:";
    cin>>roll;
    cout<<"reg_no:";
    cin>>reg_no;
}
void Student::display()
{
    cout<<"\tname of the student: "<<name<<endl;
    cout<<"\troll no of student: "<<roll<<endl;
    cout<<"\treg no of student: "<<reg_no<<endl;
}
int main()
{
    Student std1,std2;
    std1.getdetail();
    
    cout<<".................................details of std1.................................... "<<endl;
    std1.display();
    std2.getdetail();
    cout<<".................................details of std2...................................."<<endl;
    
    std2.display();
    return 0;

}