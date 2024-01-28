#include<iostream>
using namespace std;
class counter
{
    int c;
    public:
    counter(int x)
    {
        c=x;
    }
    counter(counter &obj)
    {
        cout<<"copy constructor invoked"<<endl;
        c=obj.c;
    }
    void show()
    {
        cout<<c;
    }
};
int main()
{
counter c1(10);
counter c2(c1);
c1.show();
c2.show();
}
/*
#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person(const string& n) {
        name = n;
    }
    Person(const Person& obj) {
        name = "Copy of " + obj.name;
    }
    string getName() {
        return name;
    }
};

int main() {
    Person p1("John");
    Person p2 = p1;

    cout << p2.getName();

    return 0;
}
*/