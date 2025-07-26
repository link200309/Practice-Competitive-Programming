#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int h1, d1, t1; cin >> h1 >> d1 >> t1;
    int h2, d2, t2; cin >> h2 >> d2 >> t2;

    h1 -= d2; h2 -= d1;
    int nextShot1 = t1;
    int nextShot2 = t2;
    while(h1 > 0 && h2 > 0){
        if(nextShot1 < nextShot2){
            h2 -= d1;
            nextShot2 -= nextShot1;
            nextShot1 = t1; 
        } else if (nextShot2 < nextShot1) {
            h1 -= d2;
            nextShot1 -= nextShot2;
            nextShot2 = t2;
        } else {
            h1 -= d2;
            h2 -= d1;
            nextShot1 = t1;
            nextShot2 = t2;
        }
    }

    if(h1 <= 0 && h2 <= 0){
        cout << "draw" << endl;
    } else if (h1 > 0){
        cout << "player one" << endl;
    } else {
        cout << "player two" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
