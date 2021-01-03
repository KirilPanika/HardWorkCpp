#include <iostream>

using namespace std;

int main() {

    int first;
    cout << "Enter the first number:";
    cin >> first;

    int second;
    cout << "Enter the second number:";
    cin >> second;

    int big = 0;
    for (int i = 1; i <= first && i <= second; i++) {
        if (first % i == 0 && second % i == 0) {
            big = i;
        }
    }
    cout << big;

    return 0;
}
