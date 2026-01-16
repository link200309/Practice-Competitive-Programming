#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/EOlymp-9016

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, q;

    cin >> n >> q;
    vector<ll> ve(n);

    for(ll &x : ve) cin >> x;

    ll x;
    while(q--){
        cin >> x;

        ll left = 0, right = n - 1, medio;
        string res = "NO";
        while(left <= right){
            medio = left + (right - left)/2;

            if(ve[medio] == x){
                res = "YES";
                break;
            } else if (ve[medio] > x){
                right = medio - 1;
            } else {
                left = medio + 1;
            }
        }
        cout << res << "\n";
    }
    
    return 0;
}
