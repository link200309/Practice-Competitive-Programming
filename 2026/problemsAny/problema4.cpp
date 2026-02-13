#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;
    int H, A; cin >> H >> A;
    int turnos = 0;

    vector<vector<int>> enem(N);
    for(int i = 0; i < N; i++){
        int h, a, s; cin >> h >> a >> s;
        enem[i] = {h, a, s};
    }

    int tam = enem.size();
    while(tam > 0){
        
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}
