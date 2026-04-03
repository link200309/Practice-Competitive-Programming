#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    char last=s[0];
    int indexLast=0;
    for(int i = 1; i < s.length(); i++){
        if(last == s[i]){
            s.erase(indexLast, 2);
            i=0;
            last=s[0];
            indexLast=0;
        } else {
            last = s[i]; indexLast=i;
        }
    }   
    cout << (s.length() == 0? "YES" : "NO") << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
