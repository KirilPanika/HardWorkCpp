#include <iostream>

using namespace std;

// dan massiv. Peredvinut vse schisla na odnu poziciju
int main() {


    int arr[5] = {1, 2, 3, 4, 5};
    int buf = arr[0];


    for (int i = 1; i < 5; i++) {
        cout << arr[i] << ", ";
    }   cout << buf;

    return 0;
}
