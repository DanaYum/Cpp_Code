#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[30],s1[30];
    ofstream of("result.txt");
    cin>>s1;
    of<<s1;
    of.close();
    cout<<"data saved"<<endl;
    ifstream inf("result.txt");
    inf>>s;
    cout<<s;
    inf.close();
}