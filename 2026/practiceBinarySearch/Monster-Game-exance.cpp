#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    //Definicion
    int n; cin >> n;
    vector<ll> s(n), m(n);

    //Inicializacion
    for(ll &x : s) cin >> x;
    for(ll &x : m) cin >> x;

    sort(s.rbegin(), s.rend());

    ll score = 0, j = 0, levels = m[0];
    
    for(int i = 0; i < n; i++){
        ll sFree = i+1;        

        if(sFree >= levels){
            score = max(score, (j+1)*s[i]);
            j++;
            levels += j < n? m[j] : levels;
        }
    }
    cout << score << endl;
}

int main(){
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}