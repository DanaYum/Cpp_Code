// You are using GCC
#include<iostream>
using namespace std;
class Money
{
    public:
    int rupees;
    int paisa;
};
int main()
{
    int r1,r2,p1,p2;
    cin>>r1>>p1;
    cin>>r2>>p2;
    Money amnt1;
    amnt1.rupees=r1;
    amnt1.paisa=p1;
    Money amnt2;
    amnt2.rupees=r2;
    amnt2.paisa=p2;
    int total_rupees=r1+r2;
    int total_paisa=p1+p2;
    total_rupees+=total_paisa/100;
    total_paisa%=100;
    cout<<total_rupees<<"."<<total_paisa;
    return 0;
   
    
}