#include<iostream>
using namespace std;

class complex
{
public:
    int x, y;
    complex() {}
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << x << "+i" << y;
    }
    friend complex operator+(complex e1, complex e2);
};

complex operator+(complex e1, complex e2)
{
    complex temp;
    temp.x = e1.x + e2.x;
    temp.y = e1.y + e2.y;
    return temp;
}

int main()
{
    complex c1(1, 2), c2(4, 5), c3;
    c3 = c1 + c2; // Use the overloaded operator+
    c3.show();  
    return 0;
}
