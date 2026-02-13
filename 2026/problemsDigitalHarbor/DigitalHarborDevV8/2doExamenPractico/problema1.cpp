#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    ll N, H; 
    cin >> N >> H;

    ll ant; 
    cin >> ant;

    bool ok = true;

    for(int i = 1; i < N; i++){
        ll torre; 
        cin >> torre;

        if(torre > ant){
            H -= (torre - ant);
            torre = ant;
            if(H < 0){
                ok = false;
                break;
            }
        }
        ant = torre;
    }

    cout << (ok ? "Valida" : "Invalida");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    while(T--) solve();
    return 0;
}
