#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 12) {
        cout << "You are a child." << endl;
    } else if (age <= 19) {
        cout << "You are a teenager." << endl;
    } else if (age <= 59) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }

    return 0;
}