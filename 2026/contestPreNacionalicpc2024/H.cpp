#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


void solve(){

    string s; cin >> s;
    int height = 0, heightMax = 0, pos = 1;
    int i = 1;
    for(char c : s){
        if(c == '+'){
            height++;

            if(height > heightMax){
                heightMax = height;
                pos = i;
            }
        } else {
            height = max(0, height-1);
        }
        i++;
    }

    cout << pos << endl;
}

int main(){
    solve();
    return 0;
}
