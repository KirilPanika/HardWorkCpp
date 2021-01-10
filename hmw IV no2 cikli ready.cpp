#include <iostream>

using namespace std;

//vvoditsja 10 4isel v cikle, proveritj v vozrastausem li oni porjadke
int main() {
    
    int a, prev, flag = 0;
    cout << "Enter the numbers:";
    cin >> prev;
    int q = 0;
    q++;

    while (q < 10) {
        cin >> a;
        q++;
        if (! ( prev < a)) {
            flag = 1;
        }
        prev = a;
    }
    if (flag == 1) {
        cout << "false";
    } else {
        cout << "true";
    }
    
    return 0;
}
