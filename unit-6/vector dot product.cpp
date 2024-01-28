// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
template<class T>
T dotProduct(vector<T> v1, vector<T> v2) {
T dotProd = 0;
for(int i=0; i<v1.size(); i++) {
dotProd += v1[i] * v2[i];
}
return dotProd;
}
int main() {
int n;
cin >> n;
vector<int> v1(n);
vector<int> v2(n);
for(int i=0; i<n; i++) {
cin >> v1[i];
}
for(int i=0; i<n; i++) {
cin >> v2[i];
}
cout << "Dot product of integer vectors: " << dotProduct(v1, v2) << endl;
vector<double> v3(n);
vector<double> v4(n);
for(int i=0; i<n; i++) {
cin >> v3[i];
}
for(int i=0; i<n; i++) {
cin >> v4[i];
}
cout << "Dot product of floating-point vectors: " << dotProduct(v3, v4) << endl;
return 0;
}
