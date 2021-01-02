#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "Enter A:";
    cin >> a;

    int b;
    cout << "Enter B:";
    cin >> b;

    int arr[b - a + 1];
    for ( int i = 0; i < b - a + 1; i++) {
        arr[i] = a + i;
        cout << " " << arr[i];
    }

    return 0;
}
