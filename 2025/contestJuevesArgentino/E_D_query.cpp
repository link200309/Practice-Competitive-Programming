#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> ve(n);
    for(int &x : ve) cin >> x;
    int q; cin >> q;

    while(q--){
        int i, j; cin >> i >> j; --i;

        vector<int> subve(ve.begin() + i, ve.begin() + j);
        sort(subve.begin(), subve.end());
        auto it = unique(subve.begin(), subve.end());
        cout << distance(subve.begin(), it) << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
