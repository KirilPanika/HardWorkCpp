#include <iostream>

using namespace std;

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
    
    switch (operation) {
        case '-':
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
            std::cout << "Error\n";

    }

    return 0;
}
