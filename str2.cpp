#include <iostream>
#include <string>

using namespace std;

        // get all 'a' letters
int main() {
  
  
  string s;
  cin >> s;
  
  string res = "";
  
  for (int i = 0; i < s.length(); i++) {
      if (tolower(s[i]) == 'a') {
          res += s[i];
      }
  } cout << res;

    return 0;
}
