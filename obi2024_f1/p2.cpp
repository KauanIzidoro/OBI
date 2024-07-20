#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    // descending order:
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]<arr[k]){
                swap(arr[j],arr[k]);
            }
        }
    }
    int res = arr[k-1];
    cout << res << endl;
    return 0;
}