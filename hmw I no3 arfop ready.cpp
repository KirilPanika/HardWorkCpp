#include <iostream>

using namespace std;

// perevesti 4islo v days:hours:minutes:seconds
int main() {
    // I задание 3
    int var;                                                            // new variable (seconds)
    cout << "Enter the number: "<< endl;                                // to show the sentence in console
    cin >> var;                                                         // to write down the number to the variable

    int day = var / (24 * 3600);                                        // new variable day = formula how to find days 
    var = var % (24 * 3600);                                            // new variable with seconds (seconds - days)
    int hour = var / 3600;                                              // new variable hour = formula how to find hours
    var %= 3600;                                                        // new variable with seconds (seconds - hours)
    int minutes = var / 60 ;                                            // new variable minutes = formula how to find minutes
    var %= 60;                                                          // new variable with seconds (seconds - last seconds)
    int seconds = var;                                                  // new variable with final seconds

    cout << day << ":" << hour << ":" << minutes << ":" << seconds;     // to show in console the results

    return 0;
}
