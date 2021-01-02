#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    unsigned long long input, minus_input;
    int count = 0;

    cout << "Enter input ";
    cin >> input;
    minus_input = input;

    while (minus_input % 10 != 1 && minus_input > 0){
        minus_input /= 10;
        count++;
    }
    
    if (minus_input % 10 == 1 ) {
        minus_input /= 10;
        while(count >= 0) {
            minus_input *= 10;
            count--;
        }
        cout << "Result is " << input - minus_input << endl;
    } else {
        cout << "404" << endl;
    }
    return 0;
}
