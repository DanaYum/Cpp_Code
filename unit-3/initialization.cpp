#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    rectangle(int a,int b):length(a),breadth(b){
        cout<<"value of length is :"<<a<<endl;
        cout<<"value of breadth is :"<<b<<endl;
        }
    int area()
    {
        int a=length*breadth;
        cout<<"area is "<<a;
    }
    // rectangle(int value):value(value)
    // {
    //     cout<<"value is "<<value;
    // }
};
int main()
{
    rectangle r1(2,4);
    r1.area();
}