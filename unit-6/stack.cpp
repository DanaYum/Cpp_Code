#include <iostream>
#include <vector>

template <typename T>
class StackBase {
private:
    std::vector<T> elements;

public:
    void push(T x) {
        elements.push_back(x);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack underflow!" << std::endl;
        }
    }

    void display() {
        std::cout << "Stack elements: ";
        for (auto it = elements.rbegin(); it != elements.rend(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Integer Stack
    int n;
    std::cin >> n;

    StackBase<int> intStack;

    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        intStack.push(element);
    }

    intStack.display();
    intStack.pop();
    intStack.display();

    // Double Stack
    int m;
    std::cin >> m;

    StackBase<double> doubleStack;

    for (int i = 0; i < m; ++i) {
        double element;
        std::cin >> element;
        doubleStack.push(element);
    }

    doubleStack.display();
    doubleStack.pop();
    doubleStack.display();

    return 0;
}
