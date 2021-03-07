#include <iostream>

using namespace std;


int main() {
    // Joseph Flavius problem
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 10, k = 3;
    int real = -1; // start count from the first person


    for(int count = 0; count < (N-1); count++) {  // var 'count' means how many people was deleted
        /* // go to the next person
         real += k;

         // check if array ended and we need to return for one cycle
         if (real > 9) {
             real -= 10;
         } */

        // check if this person wasnt deleted already
        for(int j = 0; j < k; j++) {
            real += 1;
            while (arr[real] == -1) {
                real++;
                if (real > (N-1)) {
                    real -= N;
                }
            }
        }

        // delete person from cycle (exclude)
        arr[real] = -1;


    }

    // go to the last remained person
    while (arr[real] == -1) {
        real++;
        if (real > (N-1)) {
            real -= N;
        }
    }

    // show his original number
    cout << arr[real] << endl;

    for(int i = 0; i < N; i++) {
        cout << i << " "<< arr[i];
    }

    return 0;
}
