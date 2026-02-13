#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<int> A, B, C;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t==1) A.push_back(i+1);
        if(t==2) B.push_back(i+1);
        if(t==3) C.push_back(i+1);
    }
    int w = min({A.size(), B.size(), C.size()});
    cout << w << endl;
    for(int i = 0; i < w; i++){
        cout << A[i] << " " << B[i] << " " << C[i];
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}