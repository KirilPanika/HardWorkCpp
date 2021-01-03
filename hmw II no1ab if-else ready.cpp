#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // a
    //inputing number
    float number;
    cout << "Enter the number: ";
    cin >> number;

       if (number < roundf(number)) {
       cout << "Yes";
   } else {
       cout << "No";
   }
    
    
    //b
    /*
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if ((number % 16) >= 10) {
        cout "Yes";
    } else {
        cout << "No";
    }
    */

    return 0;
}
