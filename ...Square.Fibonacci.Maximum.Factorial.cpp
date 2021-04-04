#include <iostream>

using namespace std;

float square1(float num){

    return num * num;
}


float square2(float *num){

    return *num * *num;
}


void Fibonacci(int n, int i = 0, int f1 = 0, int f2 = 1){

    if (i <= n ) {
        if (i == 0) {
            cout << 0 << ' ';
            Fibonacci(n, i+1, 0, 1);
        }
        else if (i == 1) {
            cout << 1 << ' ';
            Fibonacci(n, i+1, 0, 1);
        }
        else {
            cout << f1 + f2 << ' ';
            Fibonacci(n, i+1, f2, f1 + f2);
        }

    }

}


void Maximum(){

    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    float max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << max << endl;
}

int factorial (int x) {
    if (x > 1) {
        return factorial(x - 1) * x;
    }
    else {
        return 1;
    }
}



int main() {

    // Maximum();


    float num = 2.5;
    // cout << square1(num) << endl;

    // cout << square2(&num) << endl;


    // Fibonacci(10);

    cout << factorial(4);

    return 0;
}
