#include <iostream>

using namespace std;

// celsija perevesti v gradusi
int main() {

    int var;
    cout << "Enter the number in degrees:";
    cin >> var;

    int f;
    f = (var * 9 / 5) + 32;

    cout << f << " in fahrenheit";
    return 0;
}
