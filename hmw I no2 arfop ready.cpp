#include <iostream>

using namespace std;

// celsija perevesti v gradusi
int main() {

    int var;                                   // new variable
    cout << "Enter the number in degrees:";    // to show in console the sentence
    cin >> var;                                // write some number to the variable

    int f;                                     // new variable for result
    f = (var * 9 / 5) + 32;                    // convert to fahrenheit

    cout << f << " in fahrenheit";             // to show the result with sentence in console
    return 0;                                  // stop the program
}
