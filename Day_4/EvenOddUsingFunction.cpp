#include<iostream>
using namespace std;

string evenOrOdd(int number) {
    if (number % 2 == 0) {
        return "Even Number";
    } else {
        return "Not an Even Number";
    }
}

int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;

    cout << evenOrOdd(number) << endl;

    return 0;
}
