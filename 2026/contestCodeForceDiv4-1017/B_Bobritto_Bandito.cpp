#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
using namespace std;

void solve(){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int lp=0, rp=0;
    while(m != 0){
        if(lp-1 >= l){
            lp--;
            m--;
        }

        if(m == 0) break;

        if(rp+1 <= r){
            rp++;
            m--;
        }
    }

    cout << lp << " " << rp << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
