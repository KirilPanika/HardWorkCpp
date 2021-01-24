#include <iostream>

using namespace std;

// bubble sort
int main() {

    int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 1};
    int buf;

    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < (10 - 1 - i); j++) {
            if (arr[j] > arr[j + 1]) {
                buf = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = buf;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << " " << arr[i];
    }
    
    return 0;
}
