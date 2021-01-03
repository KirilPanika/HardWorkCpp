#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    if (number >= 0 && number <= 4) {
        if (number == 1) {
            cout << "0+1=" << number << endl;
        }

        if (number == 2){
            cout << "0+2=" << number << endl;
            cout << "1+1=" << 1 + 1 << endl;
        }
        if (number == 3){
            cout << "0+3=" << number << endl;
            cout << "1+2=" << 1 + 2 << endl;
            cout << "2+1=" << 2 + 1 << endl;
        } else {
            cout << "0+4=" << number << endl;
            cout << "1+3=" << 1 + 3 << endl;
            cout << "2+2=" << 2 + 2 << endl;
        }

    } else if (number > 5){
        cout << "Please enter smaller positive number next time!";
    } else {
        cout << "Please enter positive number next time!";
    }

    return 0;
}
