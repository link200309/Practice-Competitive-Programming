#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
using namespace std;

void solve(){
    int n; cin >> n;
    int ini; cin >> ini;
    int maxEsf = 0;
    int esf = 0;

    while(n-- > 1){
        int x; cin >> x;
        int sum = abs(x-ini);
        ini = x;
        esf += sum;

        if(sum > maxEsf){
            maxEsf = sum;
        }
    }
    cout << esf - maxEsf << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
