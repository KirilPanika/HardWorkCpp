#include <iostream>

using namespace std;

int main() {

    int start;
    cout << " Enter start:";
    cin >> start;

    int end;
    cout << " Enter end:";
    cin >> end;

    int step;
    cout << " Enter step:";
    cin >> step;


    for (int i = start; i <= end; i += step) {
        cout << " " << i;
    }

    return 0;
}
