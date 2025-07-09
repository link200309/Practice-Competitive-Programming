#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/status?my=on

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;

        if(n-1 > k) cout << n << '\n';
        else cout << 1 << '\n';
    }


    return 0;
}
