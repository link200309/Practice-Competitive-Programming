#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> ve(n); 

    for(ll &x : ve) cin >> x;
    sort(ve.begin(), ve.end());

    bool bandera = false;
    ll cant = 0;
    
    for(int i = ve.size()-1; i >= ve.size()/3 ; i--){
        if(bandera){cant += ve[i]; bandera = false;}
        else bandera = true;
    }

    cout << cant << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
