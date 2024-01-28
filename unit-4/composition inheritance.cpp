#include<iostream>
using namespace std;
class engine
{
    public:
    engine()
    {
        cout<<"I am engine"<<endl;
    }
    ~engine()
    {
        cout<<"Engine destroyed"<<endl;
    }
};
class car
{
    public:
    engine eng;//Engine is the part-of car
    car()
    {
        cout<<"this is car"<<endl;
    }
    ~car()
    {
        cout<<"car destroyed"<<endl;
    }
};
int main()
{
    car c;
}