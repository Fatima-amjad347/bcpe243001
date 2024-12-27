#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    if (temperature >= 30) {
        cout << "It's hot." << endl;
    } else {
        cout << "It's cold." << endl;
    }

    return 0;
}