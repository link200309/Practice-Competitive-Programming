#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;


void solve(){
    int n; cin >> n;
    int S=0, M=0, L=0;

    while(n--){
        char size; cin >> size;
        int l; cin >> l;

        if(size == 'S') S+=l;
        else if(size == 'M') M+=l;
        else L+=l;
    }

    int cS = S == 0? 0 : S == 6? 1 : S/6+1;
    int cM = M == 0? 0 : M == 8? 1 : M/8+1;
    int cL = L == 0? 0 : L == 12? 1 : L/12+1;

    cout << cS + cM + cL << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T=1;
    while(T--){solve();}
    return 0;
}
