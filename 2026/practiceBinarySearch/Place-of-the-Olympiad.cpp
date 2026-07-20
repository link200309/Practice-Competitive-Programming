#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    ll n, m, k; cin >> n >> m >> k;
    ll c = ceil((double)k/(double)n);
    ll free = m-c;

    cout << fixed << setprecision(0) << (free >= c-1? 1 : free == 0? c : ceil((double)c/(double)(free+1))) << endl; 
}

int main(){
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
