#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n; cin >> n;

    if(n%2 != 0) cout << 0 << endl;
    else if(n == 2) cout << 1 << endl;
    else cout << n/4+1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){solve();}
    return 0;
}
