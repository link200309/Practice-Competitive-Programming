#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

map<int, set<int>> gr;

int recorrer(int actual, map<int, int> &status) {
    if (status[actual] == 1) return -1;
    if (status[actual] == 2) return 0;

    status[actual] = 1;
    int total = 1;

    for (int siguiente : gr[actual]) {
        int res = recorrer(siguiente, status);
        if (res == -1) return -1;
        total += res;
    }

    status[actual] = 2;
    return total;
}

void solve() {
    int N, Q;
    cin >> N >> Q;

    while (Q--) {
        char tipo;
        cin >> tipo;

        if (tipo == 'A') {
            int x, y;
            cin >> x >> y;
            gr[x].insert(y);
        }
        else if (tipo == 'R') {
            int x, y;
            cin >> x >> y;
            gr[x].erase(y);
        }
        else if (tipo == 'D') {
            int inicio;
            cin >> inicio;

            map<int, int> status;
            int res = recorrer(inicio, status);

            cout << res;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    while (T--) solve();

    return 0;
}
