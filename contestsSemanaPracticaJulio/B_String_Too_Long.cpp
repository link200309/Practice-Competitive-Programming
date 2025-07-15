#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S; cin >> S;
    ll tam = 0;
    string res = "";

    while(S--){
        char c; 
        ll l; cin >> c >> l;
        tam += l;
        if(tam > 100){cout << "Too Long";return 0;}
        while(l--) res += c;
    }

    cout << res;

    return 0;
}
