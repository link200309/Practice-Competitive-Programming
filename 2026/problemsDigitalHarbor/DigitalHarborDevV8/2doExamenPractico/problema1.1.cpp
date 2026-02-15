#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int t){
    ll N, E; cin >> N >> E;
    
    int torreAnterior; cin >> torreAnterior;
    string res = "Valida";
    for(int i = 1; i < N; i++){
        ll torre; cin >> torre;
        
        if(torreAnterior < torre){
            ll diferencia = torre - torreAnterior;
            E -= diferencia;
            if(E < 0) {res="Invalida"; break;}
        } else {
            torreAnterior = torre;
        }
    }
    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}