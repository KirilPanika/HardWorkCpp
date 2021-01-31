#include <iostream>

using namespace std;

int main() {

    int arr [3][3] = { {1, 1, 1},
                       {1, 1, 1},
                       {1, 2, 3} };
    int res;

    res = arr[0][0] * arr[1][1] * arr[2][2]
        + arr[0][1] * arr[1][2] * arr[2][0]
        + arr[1][0] * arr[2][1] * arr[0][2]
        - arr[0][2] * arr[1][1] * arr[2][0]
        - arr[0][1] * arr[1][0] * arr[2][2]
        - arr[2][1] * arr[1][2] * arr[0][0];

    cout << res;
    
    return 0;
}
