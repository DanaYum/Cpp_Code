#include<iostream>
using namespace std;
template<typename T>
void print(T value)
{
    cout<<value<<endl;
}
int main()
{
    print<int>(4);
    print<string>("dhana");
    print<float>(7.2);
}
#include<iostream>
using namespace std;
template<class T>
T maxValue(T x, T y) 
{
    return (x > y) ? x : y; 
}
int main() 
{
    int a, b;
    cin >> a >> b;
    cout << "Maximum value: " << maxValue(a, b) << endl;
    double c, d;
    cin >> c >> d;
    cout << "Maximum value: " << maxValue(c, d) << endl;
    return 0;
}
