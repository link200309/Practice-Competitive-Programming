#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int N; cin >> N;
    string s; cin >> s;
    bool canW = false;
    string nS = s.substr(0, N);

    for(int i = 0; i < nS.length(); i++){
        if(i+1 !=nS.length() && nS[i] == '/' && nS[i+1] == '.'){
            if(canW) cout << "w";
            else cout << "v";

            canW = false;
        } else {
            if(nS[i] == '/' && i+1 != nS.length()) canW = true;
        }
    }

    if(canW) cout << "w";
    else cout << "v";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
