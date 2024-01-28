#include<iostream>
#include<string>
using namespace std;
void f1()
{
    string s1="arlcome";
    string s2="wearomddddea";
    cout<<s1.find("lc")<<endl;
    cout<<s2.rfind("ea")<<endl;
    cout<<s2.find_last_of('e');
}
void f2()
{
    string s1="welcome";
    string s2;
    s2=s1.substr(0,2);
    cout<<s2;
}
void f3()
{
    string str1("lovely professional university");
    cout<<str1.find("ve")<<endl;
    cout<<str1.rfind("ve")<<endl;
    cout<<str1.find_first_of('l')<<endl;
    cout<<str1.find_last_of('l')<<endl;
}
void f4()
{
    string str1("lovely professional university");
    string str2("ve");
    cout<<str1<<endl;
    int x=str1.find(str2);
    cout<<x<<endl;
    string temp=str1.substr(x+str2.size());
    cout<<temp<<endl;
    int y=temp.find(str2);
    cout<<y;
}
int main()
{
    //f1();
    //f2();
    //f3();
    f4();
    return 0;
}
