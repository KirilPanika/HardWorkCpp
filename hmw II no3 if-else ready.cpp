#include <iostream>

using namespace std;

//vvoditsja 4islo n, vivesti polzovatelju pravilno "ostalos n dnej"
int main() {

    //inputting day
    int day;
    cout << "Vvedite chislo: " << endl;
    cin >> day;


    // zero
    int zero;
    zero = day % 10;
    if (zero == 0 ) {
        cout << "Ostalos " << day << " dnej";
    }


    // one and eleven
    int one;
    one = day % 10;

    int eleven;
    eleven = day % 100;

    if (eleven == 11) {
        cout << "Ostalos " << day << " dnej";
    } else if (one == 1 ) {
        cout << "Ostalsja " << day << " denj";
    }


    // from two till four and from twelve till fourteen
    int twofour;
    twofour = day % 10;

    int twelve;
    twelve = day % 100;

    if (twelve >= 12 && twelve <= 14){
        cout << "Ostalos " << day << " dnej";
    } else if (twofour >= 2 && twofour <= 4) {
        cout << "Ostalos " << day << " dnja";
    }


    // from five till nine
    int fivenine;
    fivenine = day % 10;

    if (fivenine >= 5 && fivenine <= 9) {
        cout << "Ostalos " << day << " dnej";
    }

    return 0;
}
