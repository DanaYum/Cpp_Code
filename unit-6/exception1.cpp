#include <iostream>
using namespace std;
class MyException {
    public:
    string what() const {
        return "Custom Exception";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (MyException& e) {
        cout << e.what() <<endl;
    }
    return 0;
}