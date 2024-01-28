#include <iostream>
using namespace std;

struct details {
    int n, id, g, age;
};

void gender(int arr[], int n) {
    int countMale = 0, countFemale = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            countFemale++;
        } else if (arr[i] == 1) {
            countMale++;
        }
    }
    cout << "Total male patients: " << countMale << endl;
    cout << "Total female patients: " << countFemale << endl;
}

void age(int arr[], int n) {
    int countAge = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 40) {
            countAge++;
        }
    }
    cout << "Patients above 40 years: " << countAge << endl;
}

int main() {
    details v[50];  // Array to store patient details

    cin >> v[0].n;  // Assuming n is the same for all patients
    for (int i = 0; i < v[0].n; i++) {
        cin >> v[i].id >> v[i].g >> v[i].age;
    }

    int genders[50];  // Array to store genders of patients
    int ages[50];     // Array to store ages of patients

    for (int i = 0; i < v[0].n; i++) {
        genders[i] = v[i].g;
        ages[i] = v[i].age;
    }

    gender(genders, v[0].n);
    age(ages, v[0].n);

    return 0;
}
