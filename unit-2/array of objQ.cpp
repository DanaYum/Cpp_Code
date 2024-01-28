#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;
};

void displayBooks(Book books[], int n) {
    cout << "Book Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Publication Year: " << books[i].publicationYear << endl;
    }
}

int main() {
    int n;
    cout << "Enter the total number of books: ";
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();  // Clear the newline character from the previous input

        cout << "Enter the title of Book " << i + 1 << ": ";
        getline(cin, books[i].title);

        cout << "Enter the author of Book " << i + 1 << ": ";
        getline(cin, books[i].author);

        cout << "Enter the publication year of Book " << i + 1 << ": ";
        cin >> books[i].publicationYear;
    }

    displayBooks(books, n);

    return 0;
}
