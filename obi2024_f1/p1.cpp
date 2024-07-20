#include <bits/stdc++.h>
using namespace std;
int main(){
    int e, d;
    cin >> e >> d;
    if(!(e>d)) {cout << 2*(d-e); return 0;}
    cout << e + d << endl;
    return 0;
}