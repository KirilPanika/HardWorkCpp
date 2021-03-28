#include <iostream>

using namespace std;

int main() {

    string lol = "Donald Trump";
    string res = "";
    string tmpres;


    for(int i = 0; i < lol.length();) {
        tmpres = "";
        for (; lol[i] != ' '; i++) {
            if (lol[i] == '\0') {
                res += tmpres;
                cout << res;
                return 0;
            }
            tmpres = lol[i] + tmpres;
        }
        res += tmpres + ' ';
        i += 1;
    }
}
