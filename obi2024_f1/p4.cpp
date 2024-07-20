#include <bits/stdc++.h>
using namespace std;

//one-indexed
int n, q, game[55][55], newgame[55][55];

int main() {
    cin >> n >> q;

    for(int i=1;i<=n;i++){
        string s;
        cin >> s;

        for(int j=1;j<=n;j++){
            if(s[j-1] == '1'){game[i][j] = 1;}
            else game[i][j] = 0;
        }
    }

    for(int operations=1;operations<=q;operations++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int life = 0;
                life+=game[i-1][j-1];
                life+=game[i-1][j];
                life+=game[i-1][j+1];
                life+=game[i][j-1];
                life+=game[i][j+1];
                life+=game[i+1][j-1];
                life+=game[i+1][j];
                life+=game[i+1][j+1];
                
                if(game[i][j] == 0){
                    if(life == 3){
                        newgame[i][j] = 1;
                    }else{
                        newgame[i][j] = 0;
                    }
                }else{
                    if(life==2 || life==3){
                        newgame[i][j] = 1;
                    }else{
                        newgame[i][j] = 0;
                    }
                }

            }
        }
        for(int k=1;k<=n;k++){
            for(int l=1;l<=n;l++){
                game[k][l] = newgame[k][l];
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << game[i][j];
        }
        cout << endl;
    }

    return 0;
}
