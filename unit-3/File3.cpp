#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  char s[10];
  ifstream inf("result.txt");
  inf>>s;
  inf.close();
  cout<<s;
}
