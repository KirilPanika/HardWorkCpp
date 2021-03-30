#include <iostream>

using namespace std;

// vivesti vse vozmoznie varianti slozenija kotorie dadut vvedennoe 4islo
int main() {

    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    if (number >= 0 && number <= 4) {               // if it's true do next lines
        if (number == 1) {                          // if the number is one
            cout << "0+1=" << number << endl;       // show this sentence in console
        }

        if (number == 2){                           // if the number is two
            cout << "0+2=" << number << endl;       // show next lines:
            cout << "1+1=" << 1 + 1 << endl;
        }
        if (number == 3){                           // if the number is three
            cout << "0+3=" << number << endl;       // show next lines:
            cout << "1+2=" << 1 + 2 << endl;
            cout << "2+1=" << 2 + 1 << endl;
        } else {                                    // if the number is four
            cout << "0+4=" << number << endl;       // show next lines:
            cout << "1+3=" << 1 + 3 << endl;
            cout << "2+2=" << 2 + 2 << endl;
        }

    } else if (number > 5){                                             // if the number is bigger than five
        cout << "Please enter smaller positive number next time!";      // show this sentence in console
    } else {                                                            // if it's negative number
        cout << "Please enter positive number next time!";              // show this sentence in console
    }

    return 0;
}
