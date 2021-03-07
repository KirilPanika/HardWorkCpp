#include <iostream>
#include <string>

using namespace std;

        // exclude all digits from string
int main() {
  
  
  string s;
  cin >> s;
  
  string res = "";
  
  for (int i = 0; i < s.length(); i++) {
    // if (!(48 <= s[i] && s[i] <= 57)) {
    if (!isdigit(s[i])) {
         res += s[i];
     }
     
  } cout << res;
  
    return 0;
}
