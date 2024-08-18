#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int ans[4];
    ans[0] = pow((N - 2), 3); 
    ans[1] = pow((N - 2), 2) * 6;
    ans[2] = (N - 2) * 12; 
    ans[3] = 8;

    cout << ans[0] << endl;
    cout << ans[1] << endl;
    cout << ans[2] << endl;
    cout << ans[3] << endl;
    
    return 0;
}