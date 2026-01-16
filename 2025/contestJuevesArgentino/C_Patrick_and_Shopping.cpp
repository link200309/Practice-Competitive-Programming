#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    ll d1, d2, d3; cin >> d1 >> d2 >> d3;
    bool v1, v2; 
    ll d = 0;

    if(d1 < d2){
        v1 = true;
        d += d1;
        if((d1 + d2)  <= d3){
            d += d1 + 2*d2;
        } else {
            d += d3;
            v2 = true;
            if((d3 + d1) <= d2 ){
                d += d3 + d1;
            } else {
                d += d2;
            }
        }
    } else {
        v2 = true;
        d += d2;
        if((d2 + d1)  <= d3){
            d += d2 + 2*d1;
        } else {
            d += d3;
            v2 = true;
            if((d3 + d2) <= d1 ){
                d += d3 + d2;
            } else {
                d += d1;
            }
        }
    }

    cout << d << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
