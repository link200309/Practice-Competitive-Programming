#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

vector<int> dp, ve;

int esf(int pos){
    if(ve[pos+1] > ve[pos]){
        return 3 * (ve[pos+1]-ve[pos]);
    } else if (ve[pos+1] < ve[pos]) {
        return ve[pos+1]-ve[pos];
    } else {
        return 0;
    }
}

int jump(int pos){
    if(pos == ve.size()-1) return 0;
    if(dp[pos] != -1) return dp[pos];

    int next = esf(pos) + jump(pos+1);
    int nextnext = 1e9;

    if(pos < ve.size()-2){
        nextnext = esf(pos) + jump(pos+2);
    }
    dp[pos] = min(next, nextnext);
    return dp[pos];
}

void solve(){
    int n; cin >> n;
    ve.resize(n);
    dp.assign(n, -1);

    for(int &x : ve) cin >> x;

    cout << jump(0) << endl;
}

void init_code(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "r", stdout);
        freopen("debug.txt", "r", stderr);
        #endif
}

int main()
{
    // init_code();
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
