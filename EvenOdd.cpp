#include<iostream>
using namespace std;

// 1 - Even
// 0 - Odd

bool isEven(int a) {
    if (a % 2 == 0) {
        return 1; // Even
    } else {
        return 0; // Odd
    }
}

int main() {
    int num;
    cin >> num;

    if (isEven(num)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;  
    }

    return 0;
}
