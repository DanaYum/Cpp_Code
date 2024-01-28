#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x ="<<x<<"\t"<<"y ="<<y;
    }
    void operator-()
    {
        x=-x;
        y=-y;
    }
};
int main()
{
    point ob(12,14);
    -ob;
    ob.display();
}