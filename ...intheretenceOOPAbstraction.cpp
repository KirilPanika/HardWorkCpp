#include <iostream>

using namespace std;

class Cat {
private:
    string breed;
public:

    string name;
    int age;

    void greet () {
        cout << "I am " << breed << ' ' << name << ". I am " << age << " years old" << endl;
    }

    void setBreed(string b) {
        breed = b;
    }

    string getBreed() {
        return breed;
    }

    Cat() {
        name = "unknown";
        age = 0;
        breed = "unknown";
    }

    Cat(string n) {
        name = n;
        age = 0;
        breed = "unknown";
    }

    Cat(string n, int a, string b) {
        name = n;
        age = a;
        breed = b;
    }

    void meow() {
        cout << "Meow from " << name << endl;
    }
};




int main() {

    // create cat1
    Cat c1;
    Cat c2("Barsik");
    Cat c3("Volondemort", 666, "Persian");

    c1.greet();
    c2.greet();
    c3.greet();

    //c3.breed // поле приватное поэтому к нему нет доступа, но можно через методы
    c2.setBreed("Britain");
    cout << c2.getBreed() << endl;
    c2.greet();

    return 0;
}
