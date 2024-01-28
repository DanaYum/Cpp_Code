#include <iostream>
#include <list>
void removeElement(std::list<int>& dataList, int target) {
dataList.remove(target);
}
int main() {
int size;
std::cin >> size;
std::list<int> dataList;
int input;
for (int i = 0; i < size; ++i) {
std::cin >> input;
dataList.push_back(input);
}
int target;
std::cin >> target;
removeElement(dataList, target);
for (int num : dataList) {
std::cout << num << " ";
}
std::cout << std::endl;
return 0;
}