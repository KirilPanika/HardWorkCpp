#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;


// весь метод ниже конвертирует время из dd.mm.yyyy в формат time_t
time_t convertKiril(int d, int m, int y) {
    // current date/time based on current system
    time_t now = time(0);
    tm *tm_num = localtime(&now);

    // change current time to needed date of birth
    tm_num->tm_mday = d;
    tm_num->tm_mon = m - 1;
    tm_num->tm_year = y - 1900;
    time_t t = mktime(tm_num);

    return t;
}

class Cat {
public:

    string name;
    time_t dateOfBirth;


    Cat() {
        name = "unknown";
    }

    Cat(string n) {
        name = n;
    }
    // переводим в time_t
    Cat(int d, int m, int y) {
        dateOfBirth = convertKiril(d, m, y);
    }

    Cat(string n, int d, int m, int y) {
        name = n;
        dateOfBirth = convertKiril(d, m, y);
    }

    int calculateAge() {
        time_t now = time(0);   // time_t - количество секунд с 1 января 1970 года
        double seconds;
        seconds = difftime(now, dateOfBirth);
        return ((int) seconds) / (365 * 24 * 60 * 60);
    }

    void meow(int q) {  // q - kolichestvo slov "meow"
        for (int i = 0; i < q; i++) {
            cout << "meow ";
        }
        cout << endl;
    }

    void greet() {
        cout << name << " is " << calculateAge() << " years old!" << endl;
    }
};


int main(int argc, char *argv[]) {

    Cat arr[5];
    int d, m, y, q;
    string date;

    for(int i = 0; i < 1; i++) {

        cout << "Enter name: " << endl;
        cin >> arr[i].name;

        cout << "Enter birthday (day):  " << endl;
        cin >> d;
        cout << "Enter birthday (month):  " << endl;
        cin >> m;
        cout << "Enter birthday (year):  " << endl;
        cin >> y;
        arr[i].dateOfBirth = convertKiril(d, m, y);

        cout << arr[i].calculateAge() << endl;
        arr[i].greet();

        cout << "Numbers of meow: " << endl;
        cin >> q;
        arr[i].meow(q);


        /**
        1) input info about all 5 cats
        2) print all info
        3) calculate age of each cat
       **/
    }

    return 0;
}
