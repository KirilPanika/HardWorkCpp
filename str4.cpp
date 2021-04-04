#include <iostream>
#include <string>

using namespace std;

        // get all vowels (Гласные)
int main() {
  
  string vowels = "aeiou";                              // new string variable
  string s;
  cin >> s;
  
  string res = "";                                      // new string variable and there are nothing
  
  for (int i = 0; i < s.length(); i++) {
    if (vowels.find( tolower(s[i]) ) != -1) {           // 
        res += s[i];
    }
     
     
  } cout << res;

    return 0;
}
