// You are using GCC
#include<iostream>
using namespace std;
class Time
{
    int hrs,min,sec;
    public:
    Time(){}
    Time(int hr,int m,int s):hrs(hr),min(m),sec(s){}
    Time operator-(Time c)
    {
        Time temp;
        temp.hrs=hrs-c.hrs;
        temp.min=min-c.min;
        temp.sec=sec-c.sec;
        if (temp.sec < 0)
        {
            temp.min--;
            temp.sec += 60;
        }
        if (temp.min < 0)
        {
            temp.hrs--;
            temp.min += 60;
        }
        // if (temp.hrs < 0)
        // {
        //     temp.hrs += 24;
        // }
        return temp;
    }
    void show()
    {
        cout<<hrs<<"h"<<" "<<min<<"m"<<" "<<sec<<"s";
    }
};
int main()
{
    int hrs1,min1,sec1,hrs2,min2,sec2;
    cin>>hrs1>>min1>>sec1;
    cin>>hrs2>>min2>>sec2;
    Time C1(hrs1,min1,sec1),C2(hrs2,min2,sec2);
    cout<<"Time 1: "<<hrs1<<"h"<<" "<<min1<<"m"<<" "<<sec1<<"s"<<endl;
    cout<<"Time 2: "<<hrs2<<"h"<<" "<<min2<<"m"<<" "<<sec2<<"s"<<endl;
    Time C3=C1-C2;
    cout<<"Time difference: ";
    C3.show();
    
}