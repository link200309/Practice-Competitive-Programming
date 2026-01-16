#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    ll d, a, o, ra, ro; cin >> d >> a >> o >> ra >> ro;
    
    double total = (double)a-(double)d*ra + max(0.0, o-(double)d*ro); 
    double res = ((double)a-(double)d*ra)/total;
    
    cout << fixed << setprecision(8) << res*100 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
