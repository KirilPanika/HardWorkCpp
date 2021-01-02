#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter the number:";
    cin >> number;

    int fuck;
    for (int i = 0; i <= number; i++) {
        fuck = i * i == number;
        cout << i;
    }

    return 0;
}
