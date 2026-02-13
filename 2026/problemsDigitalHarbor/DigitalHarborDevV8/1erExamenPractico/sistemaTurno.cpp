#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;

    int exp = 0, noob = 0;
    queue<int> S, J, C;
    for(int i = 0; i < N; i++){
        int min; cin >> min;
        char type; cin >> type;

        if(type == 'S') S.push(min);
        else if (type == 'J') J.push(min);
        else C.push(min);
    }

    int time = 0;
    while(!S.empty() || !J.empty() || !C.empty()){
        if(noob == 0){
            if(!S.empty() && S.front() <= time){
                S.pop();
                noob = 1;
            }
        } else {
            noob--;
        }

        if(exp == 0){
            if(!J.empty() && J.front() <= time){
                J.pop();
                exp = 4;
            } else if (!C.empty() && C.front() <= time){
                C.pop();
                exp = 4;
            } else if (!S.empty() && S.front() <= time) {
                int diff = time - S.front();
                if(diff >= 10){
                    S.pop();
                    exp = 4;
                }
            }
        } else {
            exp--;
        }

        time++;
    }

    int timeMax = max(time+noob, time+exp);
    cout << timeMax << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}
