#include <iostream>
#include <fstream>

int main() {
    int n;
    std::cout << "Enter the number of values: ";
    std::cin >> n;

    int sum = 0;

    std::cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        sum += num;
    }

    std::ofstream outfile("sample.txt");
    if (!outfile.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return -1;
    }

    outfile << sum;
    std::cout << "Sum of the numbers: " << sum << std::endl;
    std::cout << "Sum has been saved in 'sample.txt'." << std::endl;

    outfile.close();
    return 0;
}
