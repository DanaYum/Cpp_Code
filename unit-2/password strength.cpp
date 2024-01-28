#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void checkPasswordStrength(string& password) {
    int length = password.length();
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    for(int i=0;i<length;i++)
    {
        if ((password[i]>=48 && password[i]<=57)||(password[i]>=65 && password[i]<=90)||(password[i]>=97 && password[i]<=122))
        {
            hasSpecialChar=false;
        }
        else
        hasSpecialChar=true;
    }

    for (char ch : password) {
        if (isupper(ch)) {
            hasUppercase = true;
        } else if (islower(ch)) {
            hasLowercase = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        }
    }

    if (length < 6) {
        cout<< "Weak";
    } else if (length >= 8 && hasUppercase && hasLowercase && hasDigit && hasSpecialChar) {
        cout<< "Strong";
    } else if (length >= 6 && (hasUppercase || hasLowercase) && hasDigit) {
        cout<< "Medium";
    } else {
        cout<< "Weak";
    }
}

int main() {
    string password;
    cin >> password;
     checkPasswordStrength(password);
    return 0;
}
