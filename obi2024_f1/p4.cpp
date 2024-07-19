#include <bits/stdc++.h>
using namespace std;

int vizinhos(const vector<string>& grid, int x, int y, int N) {
    int liveCount = 0;
    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            if (dx == 0 && dy == 0) continue;
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && grid[nx][ny] == '1') {
                ++liveCount;
            }
        }
    }
    return liveCount;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<string> m(N);
    vector<string> nextm(N);

    for (int i = 0; i < N; ++i) {
        cin >> m[i];
    }

    for (int q = 0; q < Q; ++q) {
        nextm = m;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                int liveC = vizinhos(m, i, j, N);
                if (m[i][j] == '1') {
                    nextm[i][j] = (liveC == 2 || liveC == 3) ? '1' : '0';
                } else {
                    nextm[i][j] = (liveC == 3) ? '1' : '0';
                }
            }
        }
        m = nextm;
    }
    for (int i = 0; i < N; ++i) {
        cout << m[i] << endl;
    }

    return 0;
}
