#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    double a, z1, z2;
    cout << "Enter the value for a: \n";
    cin >> a;

    z1 = (sin(2 * a) + sin(5 * a) - sin (3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
    z2 = 2 * sin(a);

    cout << "Results No3:\n";
    printf("%lf\n", z1);
    printf("%lf\n", z2);

    return 0;
}

