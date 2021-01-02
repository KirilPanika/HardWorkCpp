#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n;
    cout << "Enter size of array:";
    cin >> n;
    
    double arr[n][n];
    int b = n - 1;
    double sum = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = (double) (rand()%10+1);
            printf("%4g ", arr[i][j]);
        }
        cout << endl;
        sum += arr[i][b];
        b -= 1;
    }
    cout << sum / n;

    return 0;
}
