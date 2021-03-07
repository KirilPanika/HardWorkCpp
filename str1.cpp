#include <iostream>
#include <string>

using namespace std;

    // caser cipher :)
int main() {
  
  string s = "Abc123";
  
  string res = "";
  
  
  
  for (int i = 0; i < s.length(); i++) {
      res += s[i] + 3;
      
  } cout << res;
  
  
    return 0;
}
