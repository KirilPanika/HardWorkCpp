#include <iostream>

using namespace std;

int main() {

    string num = "826";                           // new string variable with numbers
    int res = 0;                                  // new integer variable (0 - because c++ very seriosly works with memory, there may be something)

    for (int i = 0; i < num.length(); i++) {      // cycle
        res += num[i] - 48;                       // find the amount of numbers in string  ( in table 1 is 49 )
    }
    cout << res;


    return 0;
}
