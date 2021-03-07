#include <iostream>
#include <string>

using namespace std;

        // get all vowels
int main() {
  
  string vowels = "aeiou";
  string s;
  cin >> s;
  
  string res = "";
  
  for (int i = 0; i < s.length(); i++) {
    if (vowels.find( tolower(s[i]) ) != -1) {
        res += s[i];
    }
     
     
  } cout << res;

    return 0;
}
