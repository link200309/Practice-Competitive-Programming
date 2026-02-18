#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    while(true){
        string direccion = "+x";
        int L; cin >> L; 
        if(L == 0) return;

        for(int i = 0; i < L-1; i++){
            string dobladez; cin >> dobladez;

            if(dobladez == "No") continue;

            if(direccion == "+x"){
                if(dobladez == "+z") direccion = "+z";
                else if (dobladez == "-z") direccion = "-z";
                else if (dobladez == "+y") direccion = "+y";
                else if (dobladez == "-y") direccion = "-y";
            } else if (direccion == "-x"){
                if(dobladez == "+z") direccion = "-z";
                else if (dobladez == "-z") direccion = "+z";
                else if (dobladez == "+y") direccion = "-y";
                else if (dobladez == "-y") direccion = "+y";
            } else if (direccion == "+y"){
                if (dobladez == "-y") direccion = "+x";
                else if (dobladez == "+y") direccion = "-x";
            } else if (direccion == "-y"){
                if (dobladez == "-y") direccion = "-x";
                else if (dobladez == "+y") direccion = "+x";
            } else if (direccion == "+z"){
                if (dobladez == "+z") direccion = "-x";
                else if (dobladez == "-z") direccion = "+x";
            } else if (direccion == "-z"){
                if (dobladez == "+z") direccion = "+x";
                else if (dobladez == "-z") direccion = "-x";
            }
        }
        cout << direccion << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--) solve();
    return 0;
}