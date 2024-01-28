#include<iostream>
using namespace std;
int main()
{
    int digit,sum=0,n;
    cout<<"enter any no:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout<<"digital sum is:"<<sum;
}