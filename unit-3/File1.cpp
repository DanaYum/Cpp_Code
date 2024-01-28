#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of("result.txt");
    of<<"oops! can't believe you are reading this file thrugh another file";
    of.close();
    cout<<"data saved\n";
    
}