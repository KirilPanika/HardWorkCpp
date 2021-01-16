#include <iostream>

using namespace std;

int main() {


    int arr[4][6];

    int arr1[4][6];


    cout<<"The first array is: "<<endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = (int) (rand()%10);
            cout << arr[i][j] << " ";

        } cout << endl;
    }

    cout << endl;

    cout<<"The second array is: "<<endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            arr1[i][j] = (int) (rand()%10);
            cout << arr1[i][j] << " ";

        } cout << endl;
    }
    return 0;
}
