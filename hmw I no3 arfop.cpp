#include <iostream>

using namespace std;

int main() {
    // I задание 3
    int var;
    cout << "Enter the number: "<< endl;
    cin >> var;

    int day = var / (24 * 3600);
    var = var % (24 * 3600);
    int hour = var / 3600;
    var %= 3600;
    int minutes = var / 60 ;
    var %= 60;
    int seconds = var;

    cout << day << ":" << hour << ":" << minutes << ":" << seconds;

    return 0;
}
