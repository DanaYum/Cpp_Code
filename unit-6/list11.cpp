#include <iostream>
#include <list>
#include <algorithm>
std::list<int> getUniqueElements(const std::list<int>& numbersList) 
{
    std::list<int> uniqueList = numbersList;
    uniqueList.sort();
    uniqueList.unique();
    return uniqueList;
}
int main() {
int size;
std::cin >> size;
std::list<int> numbersList;
int input;
for (int i = 0; i < size; ++i) {
std::cin >> input;
numbersList.push_back(input);
}
std::list<int> uniqueList = getUniqueElements(numbersList);
for (int num : uniqueList) {
std::cout << num << " ";
}
return 0;
}
