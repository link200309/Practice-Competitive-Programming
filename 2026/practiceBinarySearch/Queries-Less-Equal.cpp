#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a.begin(), a.end());

    for(int i = 0; i < m; i++){
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        int pos = it - a.begin();
        
        cout << pos << " ";
    }
    cout << endl;
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
