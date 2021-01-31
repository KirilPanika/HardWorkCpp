#include <iostream>

using namespace std;

// igra, naijti nuznoe 4islo 
int main() {

    int a = 1;
    int start = 0, end = 100;
    int buf;

    while (a != 0) {
        buf = (start + end) / 2;
        cout << "Is it " << buf << "?" << endl;
        cin >> a;
        if (a == 1) {
            end = buf;
        } else if ( a == 2) {
            start = buf;
        }
    }

    return 0;
}
