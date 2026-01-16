#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int lastM = 0, lastPos = 0;
    int count = 0; 

    while(n--){
        int a, b; cin >> a >> b;
        
        int auxA = a;
        a -= lastM;

        if((a%2 == 0 && lastPos != b) || (a%2 != 0 && lastPos == b)) count += max(0, a - 1);
        else count += a;
        
        lastPos = b;
        lastM = auxA;
    }

    if(lastM < m) count += m - lastM;

    cout << count << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
