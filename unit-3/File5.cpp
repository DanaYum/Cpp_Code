#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
    ofstream fp;
    fp.open("output.txt",ios::out);
    if(fp)
    {
        fp<<"Iamneo.ai"<<endl;
        fp<<"Lovely Professional University"<<endl;
        fp<<"C++ Tutorial"<<endl;
        fp<<"Object Oriented Programming"<<endl;
    }
    else
    cout<<"Error Occured while Opening File: "<<endl;
    ifstream op;
    string str;
    op.open("output.txt",ios::in);
    while(getline(op,str))
    {
        cout<<str;
    }
    return 0;
}