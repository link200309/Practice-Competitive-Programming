#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    string s; cin >> s;
    unordered_map<char, int> m;

    for(int i = 0; i < s.length(); i++) m[s[i]]++;
    

    int cont = 0;
    string res = "yes";
    for(auto &p : m){
        if(p.second % 2 != 0) cont++;
        if(cont > 1) {res = "no"; break;}
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
