#include <iostream>

using namespace std;

int main() {

    /*  pomenjat znachenija a b mestami

    int a = 2, b = 5;
    int buf;
    buf = a;
    a = b;
    b = buf;
    */
    
    
   
    
    /* pointers
    int a = 6;
    int* p;
    p = &a;
    // addresses
    cout << &a << endl; // get address
    cout << p << endl;
    // values
    cout << a << endl;
    cout << *p << endl; // go by address p

    int b = 10;
    int* q1 = &b;
    int** q2 = &q1;
    int*** q3 = &q2;
    cout << b << endl;
    cout << *q1 << endl;
    cout << **q2 << endl;
    cout << ***q3 << endl;

    cout << &b;
    */
    
    
    
    /*
    int a = 4, b = 9;
    int* p;
    int* q;
    p = &a;
    q = p;
    b = *q + 1;
    cout << a << ", " << b << endl;
    */
    
    
    
    
    /*
    int arr[] = {10, 20, 30};
    cout << arr << endl; // secretly, arr is a pointer (to 0th element)
    cout << *arr << endl;   // get 0th element
    cout << arr[0] << endl; // get 0th element
    cout << *arr + 1 << endl; // get 0th element and add 1, e.g. 10+1->11
    cout << *(arr + 1) << endl; // get 1st element (as next after 0th)
    cout << arr[1] << endl;     // get 1st element

    // default loop array
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
    // but may be with pointers
    for(int i = 0; i < 3; i++) {
        cout << *(arr + i) << "  ";
    }
    */
    
    
    
    
    /*
    int a = 3, b = 5, *p, *q;
    p = &a; q = &b;
    *p = *q;
    if (p == q) *q = 2;
    else *q = 3;
    p = q;
    *q = *q+1;
    cout << *p << "  " << a << "  " << b;
             4            5            4
    */



    return 0;
}
