#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

//https://atcoder.jp/contests/tessoku-book/tasks/dp_a?lang=en

vector<int> ve, dp;

int jump(int pos){
    if(pos == ve.size()-1) return 0;
    if(dp[pos] != -1) return dp[pos];

    int jumNext = abs(ve[pos] - ve[pos+1]) + jump(pos+1);
    int jumNextNext = 2e9;
    if(pos + 2 < ve.size()){
        jumNextNext = abs(ve[pos] - ve[pos+2]) + jump(pos+2);
    }
    dp[pos] = min(jumNext, jumNextNext);
    return dp[pos];
}

void solve(){
    int N; cin >> N;
    ve.resize(N);
    dp.assign(N, -1);
    
    for(int &x : ve) cin >> x;
    cout << jump(0) << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
