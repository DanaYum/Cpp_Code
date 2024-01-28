#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

double calculateAverageWordLength(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    double totalLength = 0.0;
    int wordCount = 0;

    while (iss >> word) {
        // We consider all characters in a word, including special characters
        for (char c : word) {
            totalLength += 1.0; // Increment length for each character
        }

        wordCount++;
    }

    if (wordCount == 0) {
        return 0.000;
    }

    return totalLength / static_cast<double>(wordCount);
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    int len = sentence.length();
    if (len < 1000) {
        double avgWordLength = calculateAverageWordLength(sentence);
        std::cout << std::fixed << std::setprecision(3);
        std::cout << avgWordLength << std::endl;
    } else {
        std::cerr << "Error: Sentence length exceeds 1000 characters." << std::endl;
        return 1; // Return an error code
    }

    return 0;
}
