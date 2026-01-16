#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/CodeForces-600B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;

    cin >> n >> m;
    vector<ll> a(n);

    for(ll &x : a) cin >> x;
    sort(a.begin(), a.end());

    ll x;
    while(m--){
        cin >> x;

        ll left = 0, right = n-1, medio;

        while(left <= right){
            medio = left + (right - left)/2;

            if(a[medio] > x){
                right = medio - 1;
            } else {
                left = medio + 1;
            }
        }

        cout << left << " ";
    }
    
    return 0;
}
