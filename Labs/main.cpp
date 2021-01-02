#include <iostream>

using namespace std;

int main() {
    int left, right;
    cout<< "Enter left and right sides"<< endl;
    cin>>left;
    cin>>right;
    for (int i=left; i <=right; i++) {
        if(i % 2 == 0)
            cout << i << endl;
    }
    return 0;
}
