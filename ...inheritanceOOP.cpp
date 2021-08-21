#include <iostream>

using namespace std;

class Animal {
public:

    string name;
    int age;
    string species;

    void greet () {
        cout << "I am " << species << ' ' << name << ". I am " << age << " years old" << endl;
    }

    Animal() {
        name = "unknown";
        age = 0;
        species = "unknown";
    }
};


class Cat: public Animal {
public:

    void meow() {
        cout << "Meow from " << name << endl;
    }

    Cat(): Animal() {
        species = "cat";

    }
};


class MaineCoon: public Cat {
public:

    string breed = "maine coon";

    void greet () {
        cout << "I am " << species << ' ' << breed << ' ' << name << ". I am " << age << " years old" << endl;
    }
};


class Dog: public Animal {
public:

    void bark() {
        cout << "Bark from " << name << endl;
    }

    Dog(): Animal() {
        species = "dog";
    }
};


int main() {

    // create animal
    Animal a1;
    a1.greet();
    a1.species = "duck";
    a1.name = "Genadij";
    a1.age = 100500;
    a1.greet();

    cout << endl;

    // create cat
    Cat c1;
    c1.greet();
    c1.name = "Zigmunds";
    c1.age = 69;
    c1.meow();
    c1.greet();

    cout << endl;

    //creat Maine Coon
    MaineCoon m1;
    m1.greet();
    m1.name = "Napoleon";
    m1.age = 1530;
    m1.meow();
    m1.greet();

    cout << endl;

    // create dog
    Dog d1;
    d1.greet();
    d1.name = "PetrPervij";
    d1.age = 4;
    d1.bark();
    d1.greet();



    return 0;
}
