#include <iostream>

using namespace std;

// dan massiv. Peredvinut vse schisla na odnu poziciju
int main() {

    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int buf = arr[0];


    for (int i = 1; i < 5; i++) {
        cout << arr[i] << ", ";
    }   cout << buf;
    */
    
    
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int buf = arr[0], lol = arr[1], kek = arr[2], rock = arr[3], cat = arr[4];

    for (int i = 0; i < 5; i++) {
     arr[0] = cat;
     arr[1] = buf;
     arr[2] = lol;
     arr[3] = kek;
     arr[4] = rock;
     cout << arr[i] << " ";
    }
    */
    
    
    int arr[5] = {1, 2, 3, 4, 5};
    int buf = arr[4];
    
    for (int i = 4; i > 0; i--) {
     arr[i] = arr[i-1];
    }
    arr[0] = buf;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
