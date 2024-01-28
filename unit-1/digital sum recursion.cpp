#include<iostream>
using namespace std;
int sumOfDigits(int num)
{
    if(num==0)
    return 0;
    else
    return num%10 + sumOfDigits(num/10;
}
int main()
{
    int n;
    cout<<"enter any number:";
    cin>>n;
    int res=sumOfDigits(n);
    cout<<"digital sum:"<<res;
}