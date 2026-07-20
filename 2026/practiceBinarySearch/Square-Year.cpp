#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int s; cin >> s;
    int root = sqrt(s);

    if((root * root) != s) {cout << -1 << endl; return;}

    cout << root << " " << 0 << endl;
}

int main(){
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}