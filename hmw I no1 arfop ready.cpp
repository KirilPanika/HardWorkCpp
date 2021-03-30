#include <iostream>

using namespace std;

// prikleitj v konce 4islo 6
int main () {

  int var;                             // new variable
  cout << "Enter the number:";         // to show in console sentence
  cin >> var;                          // to write some number to variable
  
  int sum;                             // new variable for result
  if (var >= 0) {                      // if it's true do next line
    sum = var * 10 + 6;                // to do and write the result to sum variable
    cout << sum;                       // to show the variable sum
  } else {                             // else if it's not true do next line
    cout << "Error";                   // to show the sentence in console
  }

  return 0;
}
