#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;
    set<char> alf;
    for(int i=0;i<K;i++)
    {
        char c;
        cin >> c;
        alf.insert(c);
    }

    string msg;
    cin >> msg;

    for(int j=0;j<msg.length();j++)
    {
        if(alf.find(msg[j]) == alf.end())
        {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;
    return 0;
}