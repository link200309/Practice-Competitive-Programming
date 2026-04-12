#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 4e9;
using namespace std;


void solve(){
    ll p, q; cin >> p >> q;

    for(ll r=1; r<= 1e6; r++){
        ll a = p;
        ll b = 2*p*r-2*r*q-p;
        ll c = -(p*r-p*r*r);

        ll D = b*b - 4*a*c;
        if(D < 0) continue;

        ll num = -b + sqrt(D);
        ll g = num/(2*a);

        if(2*r*g*q == p*(r+g)*(r+g-1)){
            cout << r << " " << g << endl;
            return;
        }
    }
    cout << "impossible" << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}
