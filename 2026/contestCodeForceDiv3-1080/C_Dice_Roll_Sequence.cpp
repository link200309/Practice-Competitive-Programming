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
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    int count = 0, secuencia = 0;
    for(int i = 0; i < n-1; i++){
        if(secuencia == 2) {count++, secuencia = 0;}

        if(ve[i] == ve[i+1] || 7-ve[i] == ve[i+1]){
            secuencia++;
        } else {
            if(secuencia > 0) {count++; secuencia=0;}
        }
    }

    if(secuencia > 0) {count++; secuencia=0;}
    cout << count << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}