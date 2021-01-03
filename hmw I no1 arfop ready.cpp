#include <iostream>

using namespace std;

int main () {

  int var;
  cout << "Enter the number:";
  cin >> var;
  
  int sum;
  if (var >= 0) {
    sum = var * 10 + 6;
    cout << sum;
  } else {
    cout << "Error";
  }

  return 0;
}
