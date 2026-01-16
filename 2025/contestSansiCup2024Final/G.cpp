#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

int maxElement (int num, vector<int> ve, int i){
    int max = -1;
    for(; i < ve.size(); i++){
        if(ve[i] > max){
            max = ve[i];
        }
    }
    return max;
}

void solve(){
    int n; cin >> n;
    vector<int> ve(n);
    vector<int> anios(n);
    anios[0] = 1;

    for(int &x : ve) cin >> x;

    for(int i = 1; i < n; i++){
        if(anios[i-1] <= ve[i]){
            anios[i] = ve[i]+1;
        } else {
            int maxLeft = maxElement(ve[i], ve, i);

            if(maxLeft != -1){
                if(anios[i-1] < maxLeft+1){
                    anios[i] = anios[i-1];
                } else {
                    anios[i] = maxLeft+1;
                }
            } else {
                anios[i] = ve[i]+1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << anios[i] << " ";
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
    int T = 1;
    while(T--){solve();}
    return 0;
}
