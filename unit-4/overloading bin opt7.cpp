#include<iostream>
using namespace std;
class MyString
{
    string str;
    public:
    MyString(string s):str(s){}
    MyString operator+(MyString other)
    {
        return MyString(str + other.str);
    }
    MyString operator*(int n)
    {
        string repeatedstr;
        for(int i=0;i<n;i++)
        {
            repeatedstr+=str;
        }
        return MyString(repeatedstr);
    }
    void show()
    {
        cout<<str<<endl;
    }
};
int main()
{
    string str1,str2;
    int n;
    cout<<"enter string 1: ";
    cin>>str1;
    cout<<"\nenter string 2: ";
    cin>>str2;
    cout<<"\nenter no of repeatation: ";
    cin>>n;
    MyString mystr1(str1),mystr2(str2);
    MyString concatenatedStr=mystr1 + mystr2;
    concatenatedStr.show();
    MyString repeatedStr1= mystr1*n;
    repeatedStr1.show();
    MyString repeatedStr2= mystr2*n;
    repeatedStr2.show();


}