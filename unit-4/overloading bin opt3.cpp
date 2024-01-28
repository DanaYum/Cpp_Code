#include <iostream>
using namespace std;
class Fraction {
public:
    int numerator;
    int denominator;

    Fraction(int n, int d) : numerator(n), denominator(d) {}

    Fraction operator+(Fraction other)  {
        // int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        // int newDenominator = denominator * other.denominator;
        //return Fraction(newNumerator, newDenominator);
        Fraction temp((numerator * other.denominator) + (other.numerator * denominator), denominator * other.denominator);

        return temp;
    }
    void show()
    {
        cout<<numerator<<"/"<<denominator;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(2, 3);

    Fraction result = f1 + f2;
    result.show();
    //cout << result.numerator << "/" << result.denominator;

    return 0;
}