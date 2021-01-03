#include <iostream>

using namespace std;

int main() {

  const int n = 6;
    int arr[n] = {5, 9, 15, 23, 1, 32};
    if (n % 2 != 0) {
        cout << arr [n / 2];
    } else {
        cout << arr [n / 2 - 1] << endl;
        cout << arr [n / 2];
    }
        return 0;
}
