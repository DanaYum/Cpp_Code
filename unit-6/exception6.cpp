#include <iostream>
using namespace std;
int main(){
    try{
      throw 1;
    }
    catch (int a){
        cout << "Exception number: " << a << endl;
        return 0;
    }
    cout << "No exception " << endl;
    return 0;
}
#include<iostream>
using namespace std;
class NegativeRadiusException
{
    public:
    const char* what()
    {
        return "Exception caught.Error: Radius can not be negative or zero.";
    }
};
int main()
{
    float n;
    cin>>n;
    try
    {
        if(n==0)
        throw NegativeRadiusException();
        else if(n<0)
        throw NegativeRadiusException();
        else
        cout<<"Radius set successfully: "<<n;
    }
    catch(NegativeRadiusException &e)
    {
    cout<<e.what();
    }
}