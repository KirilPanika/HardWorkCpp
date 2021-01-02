#include <iostream>

using namespace std;

int main() {
    
    // inputting n
    int n;
    cout << "Enter n:";
    cin >> n;

    // inputting array
    int arr[n];
    cout << "Enter elements for array: "<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    
    // printing array
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

    
    // finding max
    int max = arr[0];
    int placemax = 0;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            placemax = i;
        }
    }

    
    // counting average
    float sum = 0;
    for(int i=0; i<placemax; i++){
        sum += arr[i];
    }

    if (placemax != 0){
        cout << endl << "Result: " << sum / placemax;
    } else {
        cout << endl << "There is no elements to calculate average from";
    }
    return 0;
}
