#include <iostream>

using namespace std;

int main() {


    int arr [5][5] = { {1, 1, 1, 1, 1},
                       {1, 2, 2, 2, 1},
                       {1, 2, 3, 2, 1},
                       {1, 2, 2, 2, 1},
                       {1, 1, 1, 1, 1} };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }  cout << endl;
    }

    return 0;
}
