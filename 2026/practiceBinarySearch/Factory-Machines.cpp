#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool check(ll middle, vector<ll> &machines, ll p){
    ll toys = 0;
    for(int i = 0; i < machines.size(); i++){
        toys += middle/machines[i];
        if(toys >= p) return true;
    }
    return false;
}

void solve(){
    ll n, p; cin >> n >> p;
    vector<ll> machines(n);

    for(ll &x : machines) cin >> x;

    ll left = 1, right = 1e18, middle, res;
    while(left <= right){
        middle = left+(right-left)/2;

        if(check(middle, machines, p)){
            res = middle;
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    cout << res << endl;
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
