#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


bool isValid(int medio, string S, string T){
    int contador = 0;
    bool change = false;

    for(int i = 0; i < S.size(); i++){
        if(S[i] == T[i] && change) {contador++; change = false;}
        else if(S[i] != T[i]) change = true;
    }

    if(change) contador++;
    return contador <= medio;
}

void solve(){
    string S, T;
    while(cin >> S >> T){
        if(S == "*") break;

        int left = 0, right = 2e9, medio;
        while(left <= right){
            medio = left + (right - left) / 2;

            if(isValid(medio, S, T)){
                right = medio - 1;
            } else {
                left = medio + 1;
            }
        }
        cout << left << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int T = 1;
    while(T--){solve();}
    return 0;
}
