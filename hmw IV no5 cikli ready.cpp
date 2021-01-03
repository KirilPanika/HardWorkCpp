#include <iostream>

using namespace std;

int main() {

    int i = 1;
    int number;
    cout << "Enter the number:";
    cin >> number;


    for (; i < number; i *= 2) {
       }
        if (i == number) {
            cout << "Yes";
        } else {
            cout << "No";
        }

   
    return 0;
}
