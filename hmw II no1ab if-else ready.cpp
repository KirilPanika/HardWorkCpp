#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // 4islo pri okruglenii uveli4itsja
    float number;
    cout << "Enter the number: ";
    cin >> number;

       if (number < roundf(number)) {
       cout << "Yes";
   } else {
       cout << "No";
   }
    
    
    //4islo perevedjonnoe v 16-uju sistemu budet okan4ivatsja na bukvu
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
