#include <iostream>

using namespace std;

int main() {

    int num, i, m=0, flag=0;
    cout << "Enter the Number: ";
    cin >> num;

    m=num/2;
    for (i = 2; i <= m; i++) {
        if (num % i == 0) {
            cout<<"Number is not Prime. False!" << endl;
            flag=1;
            break;
        }
    }
    if (flag==0) {
        cout << "Number is Prime. True!" << endl;
    }
      return 0;
}