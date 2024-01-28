#include <iostream>
#include <string>
using namespace std;
class Subject {
private:
    string subjectName;
    int marks;

public:
    Subject() : subjectName(""), marks(0) {}

    Subject(const string& name, int marks) : subjectName(name), marks(marks) {}

    string getName() const {
        return subjectName;
    }

    int getMarks() const {
        return marks;
    }
};

int main() {
    const int NUM_SUBJECTS = 6;

    // Create an array to hold subjects and marks
    Subject subjects[NUM_SUBJECTS];

    // Input subject names and marks
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        string subjectName;
        int marks;

        cout << "Enter subject name " << i + 1 << ": ";
        cin >> subjectName;

        cout << "Enter marks for " << subjectName << ": ";
        cin >> marks;

        subjects[i] = Subject(subjectName, marks);
    }

    // Calculate total marks for Maths, Physics, and Science
    int totalMathsMarks = 0;
    int totalPhysicsMarks = 0;
    int totalScienceMarks = 0;

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        if (subjects[i].getName() == "Maths")
            totalMathsMarks += subjects[i].getMarks();
        else if (subjects[i].getName() == "Physics")
            totalPhysicsMarks += subjects[i].getMarks();
        else if (subjects[i].getName() == "Science")
            totalScienceMarks += subjects[i].getMarks();
    }

    // Print the total marks for the specified subjects
    cout << "Total marks for Maths: " << totalMathsMarks << endl;
    cout << "Total marks for Physics: " << totalPhysicsMarks << endl;
    cout << "Total marks for Science: " << totalScienceMarks << endl;

    return 0;
}
    