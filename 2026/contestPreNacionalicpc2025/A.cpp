#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

void solve(){
    int N, M; cin >> N >> M;
    vector<int> classes(M, 0);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int num; cin >> num;
            classes[j] = max(classes[j], num);
        }   
    }

    int suma = accumulate(classes.begin(), classes.end(), 0);
    cout << suma << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}