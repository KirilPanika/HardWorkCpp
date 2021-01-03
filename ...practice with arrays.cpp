#include <iostream>

using namespace std;

int main() {

    // to find max and min
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
    
    
    /*  plus 1 for every numbers
    int arr[10] = {2,4,6,8,9,7,5,3,1,10};
    for(int i = 0; i < 10; i++) {
        arr[i] = arr[i] + 1;
        cout << arr[i];
    }
    */
    
    
    /* to show numbers from a till b
     int a;
    cout << " Enter a:";
    cin >> a;

    int b;
    cout << " Enter b:";
    cin >> b;

    int arr[b-a+1];
    for(int i = 0; i <b-a+1; i++){
        arr[i] = a + i;
        cout << arr[i];
    }
    */
    
    return 0;
}
