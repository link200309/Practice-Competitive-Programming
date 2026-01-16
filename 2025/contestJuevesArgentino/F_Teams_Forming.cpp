#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int N; cin >> N;
    vector<int> es(N);
    
    for(int &x : es) cin >> x;
    sort(es.begin(), es.end());

    int p = 0;

    for(int i = 0; i < N; i += 2){
        if(i+1 != N){
            p += es[i+1] - es[i];
        }
    }

    cout << p << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
