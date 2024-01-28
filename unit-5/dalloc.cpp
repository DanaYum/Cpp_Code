#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;
    p=new int;
    /* if(!p)
        {
            cout<<"\n memory allocation failure";
            exit(1);
        }
    */
    if(p==NULL)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else
    {
        cout<<"\nMemory allocated";
        *p=12;
        cout<<"\nInteger value stored is:"<<*p;
        delete p;
        cout<<"\nMemory deallocated";
    }
    return 0;
}