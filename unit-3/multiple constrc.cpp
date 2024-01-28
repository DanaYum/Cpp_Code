#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    rectangle(int x=2,int y=5)
    {
        length=x;
        breadth=y;
    }
    int area()
    {
        return length*breadth;
    }
};
// rectangle::int area()
// {
//     return length*breadth;
// }
int main()
{
    rectangle r1;
    cout<<"area 1 is: "<<r1.area();
    rectangle r2(3,8);
    cout<<"\tarea 2 is: "<<r2.area();
}