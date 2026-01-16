#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m; cin >> n >> m;
    vector<ll> gr(n);

    for(ll i = 0; i < m; i++){
        ll a, b; cin >> a >> b; --a; --b;
        ll ga = gr[a], gb = gr[b];
        
        if(ga == 0 && gb == 0){
            gr[a] = 1;
            gr[b] = 2;
        } else if (ga != 0 && gb == 0) {
            if(ga == 1) gr[b] = 2;
            else gr[b] = 1;  
        } else if(ga == 0 && gb != 0){
            if(gb == 1) gr[a] = 2;
            else gr[a] = 1;  
        } else {
            if(ga == gb){
                cout << "IMPOSSIBLE" << "\n";
                return 0;
            }
        }
    }
    for (ll &x : gr){
        if(x == 0) x = 1;
        cout << x << " ";
    }
    return 0;
}
