#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    ll N, Q; cin >> N >> Q;
    vector<ll> ve(N);

    for(ll &x : ve) cin >> x;

    while(Q--){
        ll x; cin >> x;
        auto it1 = lower_bound(ve.begin(), ve.end(), x);
        auto it2 = upper_bound(ve.begin(), ve.end(), x);

        if(it1 == ve.end() || *it1 != x){cout << "-1 " << "-1"<<endl; continue;}

        cout << it1-ve.begin()+1 << " " << it2-ve.begin() << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
