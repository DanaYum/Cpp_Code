#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
	Rectangle(){}
    Rectangle(int len, int w) : length(len), width(w) {}
    Rectangle operator/(Rectangle& other) {
        //return Rectangle(length / other.length, width / other.width);
		Rectangle temp(length/other.length,width / other.width);
		// temp.length=length / other.length;
		// temp.width=width / other.width;
		return temp;
    }
	void show()
	{
		cout<<length<<"x"<<width;
	}
};

int main() {
    Rectangle rect1(12, 6);
    Rectangle rect2(2, 3);
    Rectangle result = rect1 / rect2;
	result.show();
    // cout << result.length << "x" << result.width;
    return 0;
}