#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int a, b, n; cin >> a >> b >> n;
    
    int num = ((double)a/n >= b || a == b)? 1 : 2; 
    cout << num << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}


