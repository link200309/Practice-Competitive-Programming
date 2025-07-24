#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    ll x; cin >> x;
    int r = 1, c = 1; 
    string dir = "col"; 

    for(int i = 1; i < x; i++){
        if(dir == "col"){
            c++;
            dir = "down";
        } else if (dir == "row"){
            r++;
            dir = "up";
        } else if (dir == "down") {
            c--;
            r++;
            if(c == 1) dir = "row";
        } else {
            c++;
            r--;
            if(r == 1) dir = "col";
        }
    }
    cout << "TERM " << x << " IS " << r << "/" << c << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
