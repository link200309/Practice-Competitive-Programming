#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    ll c, n; cin >> c >> n;

    if(n > c) cout << c+1 << endl;
    else if (c > n) cout << 0 << endl;
    else cout << n << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
