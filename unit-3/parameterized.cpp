#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    rectangle(int a,int b)
    {
        length=a,breadth=b;
    }
    int area()
    {
        int a=length*breadth;
        cout<<"area is "<<a;
    }
};
int main()
{
    rectangle r1(2,4);
    r1.area();
}