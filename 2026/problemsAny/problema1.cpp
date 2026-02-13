#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll best = -1;
int bestT = 0;

ll calculateResource(const vector<string>& O){
    ll suma = 0;
    for(const auto& row : O){
        for(char c : row){
            suma += (int)c;
        }
    }
    return suma;
}

void solve(int tc) {
    int M, N; cin >> M >> N;
    vector<string> H(M);
    for(int i = 0; i < M; i++) cin >> H[i];

    int J, K; cin >> J >> K;
    vector<string> O(J);
    for(int i = 0; i < J; i++) cin >> O[i];

    for(int i = 0; i <= M - J; i++){
        size_t pos = H[i].find(O[0]);
        while(pos != string::npos){
            bool ok = true;
            for(int k = 1; k < J; k++){
                if(H[i + k].substr(pos, K) != O[k]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << "YES" << endl;

                ll recursos_patron = calculateResource(O);
                ll distancia_base = pos + i;
                ll recursos = distancia_base * recursos_patron;

                if(recursos > best){
                    best = recursos;
                    bestT = tc;
                }
                return;
            }
            pos = H[i].find(O[0], pos + 1);
        }
    }
    cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    cout << bestT << "\n";
    return 0;
}
