/*           
            Input 1 :
            5
            1 10 20 30 40 50
            2 20 30 40 50 60
            3 30 40 50 60 70
            4 20 40 60 80 20
            5 40 45 60 70 80
            Output 1 :
            1,10,20,30,40,50,
            2,20,30,40,50,60,
            3,30,40,50,60,70,
            4,20,40,60,80,20,
            5,40,45,60,70,80,
*/
#include <iostream>
#include <fstream>
#include <vector>

struct Student {
    int id;
    std::vector<int> marks;

    void print(std::ostream& os) const {
        os << id;
        for (const auto& mark : marks) {
            os << "," << mark;
        }
        os << "," << '\n';
    }
};

void saveStudentData(const std::vector<Student>& students) {
    std::ofstream outfile("marks.dat");
    if (!outfile.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return;
    }

    for (const auto& student : students) {
        student.print(outfile);
    }

    outfile.close();
}

void printStudentData() {
    std::ifstream infile("marks.dat");
    if (!infile.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line<<std::endl;
    }

    infile.close();
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Student> students(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].id;
        students[i].marks.resize(5);
        for (int j = 0; j < 5; ++j) {
            std::cin >> students[i].marks[j];
        }
    }

    saveStudentData(students);
    printStudentData();

    return 0;
}
