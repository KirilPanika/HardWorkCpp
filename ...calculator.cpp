#include <iostream>

using namespace std;

// a simple calculator
int main() {
    
    int a = 0;
    int b = 0;
    char operation;
    
    cout << "First number:";
    cin >> a;
    cout << "Second number:";
    cin >> b;
    cout << "Operation:";
    cin >> operation;
    
    switch (operation) {                                    // to find symbol in operation variable
        case '-':                                           // if in console will be this symbol do next line:
            std::cout << "a - b = " << a - b <<'\n';
            break;
        case '+':
            std::cout << "a + b = " << a + b << '\n';
            break;
        case '*':
            std::cout << "a * b = " << a * b << '\n';
            break;
        case '/':
            std::cout << "a / b = " << a / b << '\n';
            break;
        default:
            std::cout << "Error\n";                         // if program doesn't find the symbol, to show in console the sentence

    }

    return 0;
}
