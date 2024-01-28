#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream wf("filename.txt");

  wf << "Hello World...! Welcome to the hell!..";
 
  wf.close();

  string str;

  ifstream rf("filename.txt");

  while (getline (rf, str)) {
    cout << str;
  }

  rf.close();
}
