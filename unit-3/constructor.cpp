#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
        rectangle()
        {
            length=4,breadth=5;
        }
        int area()
        {
            int a=length*breadth;
            cout<<"area is "<<a;
        }
};
int main()
{
    rectangle obj;
    obj.area();
}