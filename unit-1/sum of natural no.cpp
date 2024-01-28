#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the no upto which you wanna add:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum of natural no is: "<<sum;
    return 0;
}