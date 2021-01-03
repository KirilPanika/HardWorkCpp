#include <iostream>

using namespace std;

int main() {

    // najti maksimum
    int a;
    cout << " Enter the number A: ";
    cin >> a;

    int b;
    cout << "Enter the number B: ";
    cin >> b;

    int c;
    cout << "Enter the number C: ";
    cin >> c;
    
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    cout << max;
    
    
    /*
    if (a > b && a < c || a > c && a < b) {
        cout << "The second biggest number is A: " << a;
    }
    if (b > a && b < c || b > c && b < a) {
        cout << "The second biggest number is B: " << b;
    }
    if (c > a && c < b || c > b && c < a) {
        cout << "The second biggest number is C: " << c;
    }
    if (a == b && a < c) {
        cout << "The second biggest number is B: " << b;
    }
    if (b == c && b < a) {
        cout << "The second biggest number is B: " << b;
    }
    if (a == c && b > a) {
        cout << "The second biggest number is C: " << c;
    }
    if (a == b && a == c) {
        cout << "The second biggest number is B: " << b << ", but they are the same!";
    }
    */
    
    return 0;
}
