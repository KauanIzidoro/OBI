#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll N, M;
    int P;
    cin >> N >> M >> P;
    vector<ll> lines(N), columns(M);
    for(ll i=0;i<N;i++)
    {
        lines[i] = i;
    }
    for(ll i=0;i<M;i++)
    {
        columns[i] = i;
    }

    for(int j=0;j<P;j++)
    {
        int A, B;
        char O;
        cin >> O >> A >> B;
        // 0-indexado
        A--;
        B--;

        O == 'L' ? swap(lines[A],lines[B]) : swap(columns[A],columns[B]);
    }

    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<M;j++)
        {
            // Esta formula calcula qual sera o numero dado seu index
            // É necessário somar 1 porque neste código a matriz é 0-indexado, porém 
            // o problema espera a saída com uma matriz 1-indexado
            cout << (lines[i]*M + columns[j]+1) << " ";
        }
        cout << "\n";
    }

    return 0;
}