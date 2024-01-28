/*Input 1 :
10 22.34 
HelloWorld!
Output 1 :
10 22.34 
HelloWorld!

Input 2 :
0 0.0
Empty String
Output 2 :
0 0 
Empty

Input 3 :
-50 0.25
Today is a beautiful day.
Output 3 :
-50 0.25 
Today
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("dana.txt");
    if (outfile.is_open()) {
        int v1;
        float v2;
        string v3;
        cin >> v1;
        cin >> v2;
        cin.ignore();  // Ignore the newline character left in the buffer
		cin>>v3;
        outfile << v1 << " ";
        outfile << v2 << " ";
        outfile << v3;

        outfile.close();
    } else {
        cout << "Cannot open file for writing." << endl;
        return -1;
    }

    ifstream infile("dana.txt");
    if (infile.is_open()) {
        int v1;
        float v2;
        string v3;

        infile >> v1;
        infile >> v2;
        infile.ignore();     
        infile>>v3;
        cout << v1 << " " << v2 << "\n" << v3;

        infile.close();
    } else {
        cout << "Cannot open file for reading." << endl;
        return -1;
    }

    return 0;
}
