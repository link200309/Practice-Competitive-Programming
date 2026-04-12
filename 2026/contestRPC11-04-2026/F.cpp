#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 4e9;
using namespace std;


void solve(){
    ll n; cin >> n;
    vector<ll> ve;

    ve.push_back(-1);
    ll incremento = 1;
    ll i = 1, index=0;
    while(i <= n){
        ve.push_back(i);
        i += incremento;
        incremento++;
        index++;
    }

    if(n-ve[index] == 0) cout << index << endl;
    else {
        ll divisor = __gcd(n-ve[index], index);
        cout << index << " " << to_string((n-ve[index])/divisor)+"/"+to_string(index/divisor) << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}
