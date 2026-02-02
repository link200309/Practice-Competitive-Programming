#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n; cin >> n;

    int col = 0, row = 0, best = 0;
    for(int i = 0; i < n*n; i++){
        int num = n*n - (n-row)*n+1+col; 
        int este = (col-1) < 0? 0 : num-1;
        int oeste = (col+1 == n)? 0 : num+1;
        int norte = (row-1 < 0)? 0 : num-n;
        int sur = (row+1 ==n)? 0 : num+n;

        int sum = este + oeste + norte + sur + num;
        
        best = max(best, sum);

        if(col == n-1) {col = 0; row++;}
        else {col++;}
    }
    cout << best << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
