#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int S, n; cin >> S >> n;
   vector<pair<ll,ll>> p(n);
   
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end());

    for (auto &pr : p) {
        ll x = pr.first, y = pr.second;
        if (S > x) S += y;
        else {
            cout << "NO" <<endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T=1;
    while(T--) solve();
    return 0; 
}


