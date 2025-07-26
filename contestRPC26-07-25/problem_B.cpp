#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> ve(m, -1);
    vector<ll> cost(m, 0);

    while(k--){
        int p, c; cin >> p >> c;

        if(ve[c-1] == -1){
            ve[c-1] = p;
        } else {
            if(ve[c-1] == p){
                cost[c-1] += 100;
            } else {
                cost[c-1] += abs(ve[c-1] - p);
            }
            ve[c-1] = -1;
        }
    }

    for(int i = 0; i < m; i++){
        if(ve[i] != -1) cout << cost[i] + 100;
        else cout << cost[i];
        if(i+1 != m) cout << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
