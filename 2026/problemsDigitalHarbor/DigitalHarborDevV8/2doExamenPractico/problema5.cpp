#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



void solve(){
    int N; cin >> N;
    int exp = 0, noob = 0;
    queue<int> V, S, J, C;

    for(int i = 0; i < N; i++){
        int minuto; cin >> minuto;
        char type; cin >> type;

        if(type == 'S') S.push(minuto);
        else if (type == 'V') V.push(minuto);
        else if (type == 'J') J.push(minuto);
        else C.push(minuto);
    }

    int time = 0;
    while(!S.empty() || !J.empty() || !C.empty() || !V.empty()){
        if(noob == 0){
            if(!S.empty() && S.front() <= time){
                S.pop();
                noob = 1;
            }
        } else {
            noob--;
        }

        if(exp == 0){
            if (!V.empty() && V.front() <= time){
                V.pop();
                exp = 4;
            } else if(!J.empty() && J.front() <= time){
                J.pop();
                exp = 4;
            } else if (!C.empty() && C.front() <= time){
                C.pop();
                exp = 4;
            } else if (!S.empty() && S.front() <= time) {
                int diff = time - S.front();
                if(diff > 10){
                    S.pop();
                    exp = 4;
                }
            }
        } else {
            exp--;
        }

        time++;
    }

    cout << time + max(noob, exp);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}
