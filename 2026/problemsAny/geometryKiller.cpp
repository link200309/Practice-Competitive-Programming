#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b, c; cin >> a >> b >> c;  
    ll p = c*b;
    ll q = c+b;
    ll maxDiv = __gcd(p,q);   
    cout << p/maxDiv << " " << q/maxDiv << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}


