#include<iostream>
using namespace std;
int main()
{
    int n,digit,rev=0;
    cout<<"enter any no:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10 + digit;
        n/=10;
    }
    cout<<"rev of the no is:"<<rev;
}