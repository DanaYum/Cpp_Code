#include<iostream>
using namespace std;
class function
{
    public:
    int len,bre;
    function(){}
    function(int l,int b):len(l),bre(b){}
    bool operator==( function c) 
    {
        return (len == c.len && bre == c.bre);
    }

};
int main()
{
    int l1,b1,l2,b2;
    cin>>l1>>b1;
    cin>>l2>>b2;
    function c1(l1,b1),c2(l2,b2),c3;
    if(c1==c2)
    {
        cout<<"Rectangle 1 and Rectangle 2 are equal in size";
    }
    else
    cout<<"Rectangle 1 and Rectangle 2 are not equal in size";
}