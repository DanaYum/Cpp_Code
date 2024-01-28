#include <iostream>

class Euclids {
private:
    int num1;
    int num2;
    int gcd;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void computeGCD() {
        if (num1 <= 0 || num2 <= 0) {
            gcd = 76;
            return;
        }

        int a = num1;
        int b = num2;
        int temp;
        
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        gcd = a;
    }

    void display() {
        std::cout << num1 << " " << num2 << std::endl;
        std::cout << gcd << std::endl;
    }
};

int main() {
    Euclids euclid;
    int a, b;
    
    std::cin >> a >> b;
    
    euclid.setData(a, b);
    euclid.computeGCD();
    
    euclid.display();
    
    return 0;
}