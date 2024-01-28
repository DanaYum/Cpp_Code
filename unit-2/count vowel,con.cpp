#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        char c=tolower(line[i]);
        if(c=='a' || c=='e' || c=='i' ||
           c=='o' || c=='u')
        {
            ++vowels;
        }
        else if(c>='a'&& c<='z')
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }
    cout<<"vowels: "<<vowels<<endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}
/*
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

int totalConsonants(string str) 
{ 
	int count = 0; 
	for (int i = 0; i < str.length(); i++) 

		// To check is character is Consonant 
		if (isConsonant(str[i])) 
			++count; 
	return count; 
} 

// Driver code 
int main() 
{ 
	string str = "abc de"; 
	cout << totalConsonants(str); 
	return 0; 
} 
*/
