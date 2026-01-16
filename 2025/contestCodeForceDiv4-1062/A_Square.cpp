#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a == b && b == c && c == d){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
