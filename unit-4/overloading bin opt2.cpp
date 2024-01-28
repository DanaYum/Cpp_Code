#include<iostream>
using namespace std;
class complex{
    public:
    int x,y;
    complex(){}
    complex(int a, int b):x(a),y(b){}
    complex operator +(complex c)
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    void show()
    {
        cout<<x<<"+i"<<y;
    }
};
int main()
{
    complex C1(2,3),C2(4,5),C3;
    //C3=C1+C2;
    C3=C1.operator + (C2);
    C3.show();
    //cout<<C3.x<<"+"<<C3.y;
}