#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    string s; cin >> s;
    stack<char> ns;
    
    ns.push(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(ns.empty()) {ns.push(s[i]); continue;}
        
        char c = ns.top();

        if(c == s[i]){
            ns.pop();
        } else {
            ns.push(s[i]);
        }
    }

    string sns;
    while(!ns.empty()){
        sns.push_back(ns.top()); ns.pop();
    }
    reverse(sns.begin(), sns.end());
    cout << sns << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
