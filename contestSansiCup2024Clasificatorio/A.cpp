#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
using namespace std;


void solve(){
    string s; cin >> s;
    string pal = "ALPACA";
    int index = 0;
    int count = 0;

    for (int i = 0; i < s.length(); i++){
        if(s[i] == pal[index]){
            index++;
        }

        if(index == pal.length()){
            index = 0;
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
