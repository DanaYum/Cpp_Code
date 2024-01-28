/*  ->*	This operator uses the pointer to the member of a class and a pointer to the object of the same class,
        to access the member of a class.
	::*	This operator allows us to create a pointer to a class member, which could be data member or member 
	    function.
	.*	This operator uses the pointer to the member of a class and an object of the same class, 
		to access member of a class.	
*/
#include<iostream>
using namespace std;
class X
{
	public:
		int a;
		void f(int b)
		{
			cout<<"The value of b is "<<b<<endl;
		}
};
int main()
{
	//declare pointer to data member
	int X::*ptiptr=&X::a;
	//declare a pointer to member function
	void(X::a*ptfptr)(int)=&X::f;
	//create an object of class type X
	X xobject;
	//initialize data member
	xobject.*ptiptr=10;
	cout<<"The value of a is "<<xobject.*ptiptr<<endl;
	//call member funtion
	(xobject.*ptfptr)(20);
}
