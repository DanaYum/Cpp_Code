#include <iostream>
using namespace std;

class B;

class A {
    friend class B;
    int data;
    public:
    A() : data(5) {}
};

class B {
    int data;
public:
    B() : data(10) {}
    void display(A obj) {
        cout << obj.data << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.display(objA);
    return 0;
}