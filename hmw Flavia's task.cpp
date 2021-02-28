#include <iostream>

using namespace std;

int main() {

    int arr[10] = {1, 3, 2, 4, 8, 11, 3, 3, 8, 7};
    int step = 3;

    for ( int i = 0; i < 10; i+=step ) {
        arr[i] = 0;
        //cout << arr[i];
    }

    return 0;
}
