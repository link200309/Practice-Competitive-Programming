#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

void solve(){
    int N; cin >> N;
    vector<int> dis(N-1);

    int xAnt, yAnt; cin >> xAnt >> yAnt;
    ll cEven = 0, cOdd = 0, smaller = 1e18, greater = 1;
    for(int i = 2; i <= N; i++){
        int x, y; cin >> x >> y;
        ll dis = 0;
        
        if(y == yAnt) dis = abs(x - xAnt);
        else dis = abs(y - yAnt);
        
        if(i%2 == 0){
            cEven += dis;
            cOdd -= dis;

            if(cEven-1 < smaller){
                smaller = cEven-1;
            }
        } else {
            cEven -= dis;
            cOdd += dis;

            if(1-cOdd > greater){
                greater = 1-cOdd;
            }
        }

        xAnt = x;
        yAnt = y;
    }

    cout << (greater > smaller? -1 : smaller) << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}