#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && s[3] == '-' && isdigit(s[4]) && isdigit(s[5]) && isdigit(s[6]) && isdigit(s[7]) &&
        s[8] == '\0') {
        cout << 1 << endl;
    }
    else if (isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && isdigit(s[3]) && isupper(s[4]) && isdigit(s[5]) && isdigit(s[6]) && s[7] == '\0') {
        cout << 2 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}