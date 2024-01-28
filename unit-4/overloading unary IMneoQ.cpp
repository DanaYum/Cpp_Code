#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class CustomString {
    string str;

    public:
    CustomString() {}
    CustomString(const string& x) : str(x) {}

    void operator++() {
        // if (!str.empty()) {
        //     str[0] = toupper(str[0]);
        // }
        int check=0;
        int i=0;
        while(str[i])
        {
            if(check==0)
            {
                str[i]=toupper(str[i]);
                check=1;
            }
            else if(isspace(str[i]))
            {
                check=0;
            }
            i++;
        }
    }

    void get() {
        getline(cin, str);
    }

    void show() const {
        cout << str;
    }
};

int main() {
    CustomString ob;
    ob.get();

    cout << "Original string: ";
    ob.show();
    cout <<endl;

    ++ob;

    std::cout << "Modified string: ";
    ob.show();
    std::cout << std::endl;

    return 0;
}
