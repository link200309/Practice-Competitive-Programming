#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    //Definicion
    int n; cin >> n;
    vector<ll> s(n), m(n);
    unordered_map<int, bool> dp;

    //Inicializacion
    for(ll &x : s) cin >> x;
    cin >> m[0];
    for(int i = 1; i < n; i++) {
        int num; cin >> num;
        m[i] = num+m[i-1];
    }

    sort(s.begin(), s.end());

    //Proceso
    ll sFree, res = 0;
    for(int i = 0; i < n; i++){
        if(!dp[s[i]] ){
            sFree = n-i;
            dp[s[i]] = true;
        } else continue;   
        
        ll score = 0;
        auto it = lower_bound(m.begin(), m.end(), sFree);
        int pos = it-m.begin();
        if(it != m.end()){
            if(*it > sFree) score = pos * s[i];
            else score = (pos+1) * s[i];
        }
        res = max(res, score);
    }
    cout << res << endl;
}

int main(){
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}