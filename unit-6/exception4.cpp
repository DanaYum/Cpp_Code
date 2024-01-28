#include <iostream>
using namespace std;

class MyException {};

int main() {
    try {
        try {
            throw MyException();
        }
        catch (int x) {
            cout << "Inner catch block: " << x << endl;
        }
    }
    catch (MyException& e) {
        cout << "Outer catch block" << endl;
    }
    return 0;
}