#include <bits/stdc++.h>
using namespace std;

bool is_upper(string s){
    for(int i=0;i<3;i++){
        if(!isupper(s[i])){return false;}
        return true;
    }
}

bool is_hifen(string s){
    if(s[3] == '-'){return true;}
    return false;
}

bool is_digit(string s){
    for(int i=4;i<8;i++){
        if(!isdigit(s[i])){return false;}
        return true;
    }
}

bool correct_lenght(string s){
    if(s.length() == 8 || s.length() == 7 && s[s.length()] == '\0'){return true;}
    return false;
}

int main() {
    string s;
    cin >> s;

    //old 
    if(is_upper(s) && is_hifen(s) && is_digit(s) && correct_lenght(s)){cout << 1 << endl;}
    //new
    else if(is_upper(s) && isdigit(s[3]) && isupper(s[4]) && isdigit(s[5]) && isdigit(s[6]) && correct_lenght(s)){cout << 2 << endl;}
    // error
    else{cout << 0 << endl;}

    return 0;
}