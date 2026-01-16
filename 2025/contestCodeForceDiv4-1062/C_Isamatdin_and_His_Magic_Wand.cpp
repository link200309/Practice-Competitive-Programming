#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> ve(n); 

    bool par = false, impar = false;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ve[i] = x;
        if(ve[i]%2 == 0){
            par = true;
        } else {
            impar = true;
        }
    } 

    if(par && impar) sort(ve.begin(), ve.end());

    for(int &x : ve){
        cout << x << " ";
    }
    cout << endl;
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
