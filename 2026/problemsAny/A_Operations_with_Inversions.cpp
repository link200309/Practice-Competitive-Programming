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
    
    for(int &x : ve) cin >> x;
    
    int count = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max > ve[i]){
            count++;
        } else {
            max = ve[i];
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
