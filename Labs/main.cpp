#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char** argv) {

    double x, a, b, n;
    cout << "Enter the value for x: \n";
    cin >> x;

    if (x >= 0 && x <= 1) {
       a = 3.2 * pow(x,2);
        printf("%lf\n", a);

    } else if ( x < 0) {
        b = pow(sin(x + 1),2);
        printf("%lf\n", b);

    } else {
        n = 3 * pow(x,2) - 1;
        printf ("%lf", n);
    }
    return 0;
}
