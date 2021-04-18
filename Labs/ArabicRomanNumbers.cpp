#include <iostream>
#include <string.h>
#include <math.h>

void RomToAr();

using namespace std;

void ArToRom() {
   int num;
   
   cout << "Enter arabic number: ";
   cin >> num;

   if ( 1 <= num && num <= 3999) {
       cout << "Roman number: " << endl;
       for (; num >= 1000; num -= 1000) cout << "M";
       if (num >= 900) {
           num -= 900;
           cout << "CM";
       }

       if (num >= 500) {
           num -= 500;
           cout << "D";
       }

       if (num >= 400) {
           num -= 400;
           cout << "CD";
       }
       else {
           for (; num >= 100; num -= 100) cout << "C";
       }

       if (num >= 90) {
           num -= 90;
           cout << "XC";
       }
       if (num >= 50) {
           num -= 50;
           cout << "L";
       }
       if (num >= 40) {
           num -= 40;
           cout << "XL";
       }
       else {
           for (; num >= 10; num -= 10) cout << "X";
       }
       if (num >= 9) {
           num -= 9;
           cout << "IX";
       }
       if (num >= 5) {
           num -= 5;
           cout << "V";
       }
       if (num >= 4) {
           num -= 4;
           cout << "IV";
       }
       else {
           for (; num >= 1; num -= 1) cout << "I";
       }
   } cout << endl;
}



void RomToAr() {
    string num;
    int res = 0;

    cout << "Enter roman number: ";
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] == 'M') {
            res += 1000;
        }
        else if (num[i] == 'C' && num[i+1] == 'M') {
            res +=900;
            i += 1;
        }
        else if (num[i] == 'D') {
            res += 500;
        }
        else if (num[i] == 'C' && num[i+1] == 'D') {
            res +=400;
            i += 1;
        }
        else if (num[i] == 'C') {
            res += 100;
        }
        else if (num[i] == 'X' && num[i+1] == 'C') {
            res += 90;
            i += 1;
        }
        else if (num[i] == 'L') {
            res += 50;
        }
        else if (num[i] == 'X' && num[i+1] == 'L') {
            res += 40;
            i += 1;
        }
        else if (num[i] == 'X') {
            res += 10;
        }
        else if (num[i] == 'I' && num[i+1] == 'X') {
            res += 9;
            i += 1;
        }
        else if (num[i] == 'V') {
            res += 5;
        }
        else if (num[i] == 'I' && num[i+1] == 'V') {
            res += 4;
            i += 1;
        }
        else if (num[i] == 'I') {
            res += 1;
        }
        else {
            cout << "error" << endl; 
        }
    }
    cout << "Arabic number: " << res << endl;
}




int main() {
    
    int menu;

    cout << " 0 - Exit from program \n 1 - Convert from Arabic to Roman \n 2 - Convert from Roman to Arabic \n";
    do {
        cout << ">>>>";
        cin >> menu;
        switch (menu) {
            case 0:
                return 0;
            case 1:
                ArToRom();
                break;
            case 2:
                RomToAr();
                break;
        }
    } while (menu != 0);



    return 0;
}
