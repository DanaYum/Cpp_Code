#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class WordCounter {
private:
    unordered_map<string, int> word_counts;
    unordered_set<string> unique_words;
    vector<string> word_sequence;

public:
    void countWords(const string& sentence) {
        istringstream iss(sentence);
        string word;

        while (iss >> word) {
            word_sequence.push_back(word);
            if (unique_words.insert(word).second) {
                word_counts[word] = 1;
            }
            else {
                word_counts[word]++;
            }
        }
    }

    void displayWordCounts() {
        int total_words = unique_words.size();

        cout << "Total words: " << total_words << "\n";
        cout << "Word Counts:\n";

        for (const auto& word : word_sequence) {
            auto it = word_counts.find(word);
            if (it != word_counts.end()) {
                cout << word << ": " << it->second << "\n";
                word_counts.erase(it);
            }
        }
    }
};

int main() {
    string sentence;
    cout<<"enter a sentence: ";
    getline(cin, sentence);
    WordCounter wordCounter;
    wordCounter.countWords(sentence);
    wordCounter.displayWordCounts();

    return 0;
}
