#include <iostream>

using namespace std;

int main() {

    int arr[10] = {1, 3, 2, 4, 8, 11, 3, 3, 8, 7};
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    for(int z = 10; z > 0; --z) {
        if (arr[z] < min) {
            min = arr[z];
        }

    }
    cout << max << endl;
    cout << min << endl;
    
    return 0;
}
