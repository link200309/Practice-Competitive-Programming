#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll cantImp = 0;
    ll count = 0;

    for(ll &x : a){
        cin >> x;
        if(x%2 != 0) cantImp++;
        count += x;
    }

    sort(a.begin(), a.end());

    if(cantImp == 0){
        count = 0;
    } else {
        ll ite = cantImp/2;
        for(ll i = 0; i < a.size() && ite > 0; i++){
            if(a[i]%2 != 0){
                count -= a[i];
                ite--; 
            }   
        }
    }
    cout << count << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
