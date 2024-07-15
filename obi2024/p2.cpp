#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> points(n);
    for (int i = 0; i < n;++i) {cin >> points[i];}
    sort(points.rbegin(), points.rend());
    int res = points[k - 1];
    cout << res << endl;
    
    return 0;
}