#include <iostream>

using namespace std;

int main() {
    //iv циклы задание 1
    int first;
    cout << "Enter the first number:";
    cin >> first;

    int second;
    cout << "Enter the second number:";
    cin >> second;

    int big = 0;
    for (int i = 1; i <= first/2 && i <= second/2; i++) {
        if (first % i == 0 && second % i == 0) {
            big = i;
        }
    }
    cout << big;


    return 0;
}
