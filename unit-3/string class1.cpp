#include<iostream>
using namespace std;
int main()
{
    string s1="hello";
    string s2="world";
    string s3;
    s3=s1;
    s3="neither"+s1+"nor";
    s3+=s2;
    s1.swap(s2);
    cout<<s3;
}