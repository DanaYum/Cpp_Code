/*  ->*	This operator uses the pointer to the member of a class and a pointer to the object of the same class,
        to access the member of a class.
	::*	This operator allows us to create a pointer to a class member, which could be data member or member 
	    function.
	.*	This operator uses the pointer to the member of a class and an object of the same class, 
		to access member of a class.	
*/
#include <iostream>
using namespace std;

class A {
public:
    int x, y;
};

int main() {
    int A::* p1 = &A::x;
    int A::* p2 = &A::y;

    const int size = 3; 
    A arr[size];

    arr[0].*p1 = 10;
    arr[0].*p2 = 10;

    arr[1].*p1 = 20;
    arr[1].*p2 = 20;

    arr[2].*p1 = 30;
    arr[2].*p2 = 30;

    for (int i = 0; i < size; i++) {
        cout << arr[i].*p1 << " ";
        cout << arr[i].*p2 << endl;
    }

    return 0;
}
