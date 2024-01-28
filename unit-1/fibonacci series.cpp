#include<iostream>
using namespace std;
int main()
{
    int i=1,n,a=0,b=1,c;
    cout<<"enter any no:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;++i)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    

}