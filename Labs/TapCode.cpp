#include <iostream>

using namespace std;


int main() {

    char table [5][5] = {{ 'A', 'B', 'C', 'D', 'E' },
                         { 'F', 'G', 'H', 'I', 'J' },
                         { 'L', 'M', 'N', 'O', 'P' },
                         { 'Q', 'R', 'S', 'T', 'U' },
                         { 'V', 'W', 'X', 'Y', 'Z' } };

    char H;
    string S;
    cout << "Enter the word: ";
    cin >> S;


    for (int g = 0; g < S.length(); g++) {
        H = toupper(S[g]);

        if (H == 'K') cout << ". ...  ";
        else {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (H == table[i][j]) {
                        for (int a = 0; a < i + 1; a++) cout << '.';
                        cout << ' ';
                        for (int a = 0; a < j + 1; a++) cout << '.';
                        cout << "  ";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
