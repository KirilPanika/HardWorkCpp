#include <iostream>
#include <string>

using namespace std;

//compare with already defined password
int compare(const string& s) {
    string password = "lolkek4eburek";
    if (password.length() != s.length()) {
        return 0;
    }
    else  {
        for ( int i = 0; i < password.length(); i++) {
            if (password[i] != s[i]) {
                return 0;
            }
        }
        return 1;
    }
}

// compare with password start with p-th char l chars
int compare(size_t p, size_t l, const string& s) {
    string password = "lolkek4eburek";
    if (p+l-1 >= password.length()) return 0;
    if (p+l-1 >= s.length()) return 0;
    else  {
        for ( int i = p; i < (p+l); i++) {
            if (password[i] != s[i]) {
                return 0;
            }
        }
        return 1;
    }
}


// compare password start with p-th char l chars with
// string s start with sp-th char sl chars
int compare(size_t p, size_t l, const string& s, size_t sp, size_t sl) {
    string password = "lolkek4eburek";
    if (p+l-1 >= password.length()) return 0;
    if (sp+sl-1 >= s.length()) return 0;
    if (l != sl) return 0;
    else  {
        for ( int i = p, j = sp; i < (p+l); i++, j++) {
            if (password[i] != s[j]) {
                return 0;
            }
        }
        return 1;
    }
}

// compare password with s
int compare(const char* s) {
    string password = "lolkek4eburek";
    for (int i = 0; i < password.length(); i++) {
        if (s[i] == '\0') return 0;
        if (password[i] != s[i]) return 0;
    }
    return 1;
}


// compare with password start with p-th char l chars
int compare(size_t p, size_t l, const char* s) {
    string password = "lolkek4eburek";
    if (p+l-1 >= password.length()) return 0;
    for ( int i = 0; i < p; i++ ) {
        if (s[i] == '\0') return 0;
    }
    for (int i = p; i < (p+l); i++) {
        if (s[i] == '\0') return 0;
        if (password[i] != s[i]) return 0;
    }
    return 1;
}

// compare password start with p-th char l chars
// with string s n chars (start with 0-th)
int compare(size_t p, size_t l, const char* s, size_t n) {
    string password = "lolkek4eburek";
    if (p+l-1 >= password.length()) return 0;
    if (l != n) return 0;
    for ( int i = p, j = 0; i < (p+l); i++, j++) {
        if (s[i] == '\0') return 0;
        if (password[i] != s[j]) return 0;
    }
    return 1;
}


int main() {

    // all functions return 0 if strings do not match
    // or 1 if the are equals

    string t = "lolkek4eburek";
    const char* tc = "lolkek4eburek";

   // cout << compare(t);
   // cout << compare(2, 5, t);
   // cout << compare(1, 3, t, 3, 3);
   // cout << compare(tc);
   // cout << compare(0, 1, tc);
   cout << compare(0, 1, tc, 1);


    return 0;
}
