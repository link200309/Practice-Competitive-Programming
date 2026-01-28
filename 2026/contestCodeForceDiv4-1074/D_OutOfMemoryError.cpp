#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n, m , h; cin >> n >> m >> h;
    vector<ll> ve(n);

    for(ll &x : ve) cin >> x;

    unordered_map<int, int> veClon;
    while(m--){ 
        int b, c; cin >> b >> c; --b;
        
        if(veClon.find(b) == veClon.end()){
            veClon[b] = ve[b];
        }   

        if(veClon[b] + c <= h){
            veClon[b] += c;
        } else {
            veClon.clear();
        }
    }

    for(int i = 0; i < n; i++){
        if(veClon.find(i) != veClon.end()){
            cout << veClon[i] << " ";
        } else {
            cout << ve[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
