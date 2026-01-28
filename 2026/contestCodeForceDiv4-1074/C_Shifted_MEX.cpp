#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());

    a.erase(unique(a.begin(), a.end()), a.end());

    int best = 0;
    int current = 0;

    n = a.size();   
    for(int i = 0; i < n - 1; i++){
        if((a[i+1] - a[i]) == 1){
            current++;
        } else {
            best = current > best ? current : best;
            current = 0;
        }
    }

    cout << max(current + 1, best + 1) << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
