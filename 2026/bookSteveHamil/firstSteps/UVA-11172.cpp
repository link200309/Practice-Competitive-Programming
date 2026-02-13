#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int a, b; cin >> a >> b;

    if(a < b){
        cout << "<" << endl;
    } else if (a > b) {
        cout << ">" << endl;
    } else {
        cout << "=" << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}