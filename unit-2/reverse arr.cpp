#include <iostream>
#include <string>
using namespace std;

// Function to reverse a sentence
string reverseSentence(const string& sentence) {
    string reversed;
    string word;
    for (int i = sentence.size() - 1; i >= 0; i--) {
        if (sentence[i] != ' ') {
            word.insert(word.begin(), sentence[i]);
        } else {
            reversed += word;
            reversed += ' ';
            word = "";
        }
    }
    reversed += word; // Add the last word
    return reversed;
}

// Function to extract vowels and consonants
void extractVowelsAndConsonants(const string& sentence, string& vowels, string& consonants) {
    for (char ch : sentence) {
        if (isalpha(ch)) {
            char lowercaseCh = tolower(ch); // Convert to lowercase for case insensitivity
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
                vowels += ch;
            } else {
                consonants += ch;
            }
        }
    }
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string reversed = reverseSentence(sentence);
    cout << "Reversed Sentence: " << reversed << endl;

    string vowels, consonants;
    extractVowelsAndConsonants(sentence, vowels, consonants);
    cout << "Extracted Vowels: " << vowels << endl;
    cout << "Extracted Consonants: " << consonants << endl;

    return 0;
}
