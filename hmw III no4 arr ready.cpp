#include <iostream>

using namespace std;

int main() {

const int n = 6;
    int flag = 0;
    int arr[n] = {32, 2, 23, 23, 1, 32};
    for (int i = 0; i < n/2; i++) {
        if ( arr[i] != arr[n - (i+1)] ){
            flag = 1;
            break;
        }

    }
    if (flag == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
