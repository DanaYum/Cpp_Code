#include <iostream>
using namespace std;

// Function to check for consonant
bool isConsonant(char ch)
{
    // To handle lower case
    ch = toupper(ch);

    return !(ch == 'A' || ch == 'E' ||
             ch == 'I' || ch == 'O' ||
             ch == 'U') && ch >= 65 && ch <= 90;
}

int totalConsonants(const char* str)
{
    int count = 0;
    const char** ptr = &str;

    while (**ptr != '\0')
    {
        // To check if the character is a consonant
        if (isConsonant(**ptr))
            ++count;
        (*ptr)++; // Move to the next character using the pointer-to-pointer
    }

    return count;
}

int main()
{
     char str[1000];
    cin.getline(str,1000);
    cout << totalConsonants(str);
    return 0;
}
