// You are using GCC
#include<iostream>
using namespace std;
union Customers
{
    char name[50];
    int acc_no;
    int balance;
};
void increment_balance(Customers c[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(c[i].balance>1000)
        {
            c[i].balance+=100;
            cout<<c[i].balance;
        }
    }
}
int main()
{
    int numcus;
    cin>>numcus;
    Customers cust[numcus];
    for(int i=0;i<=numcus;i++)
    {
        cin>>cust[i].name>>cust[i].acc_no>>cust[i].balance;
    }
    increment_balance(cust,numcus);
    return 0;
}
