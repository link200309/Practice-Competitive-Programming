#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int nextDecimal(int x){
    while(x%10 != 0){
        x++;
    }
    return x;
}

int d(int i){
    int suma = 0;
    while(i != 0){
        suma += i%10;
        i /= 10;
    }
    return suma;
}

void solve(){
    int x; cin >> x;
    if(x < 9 || x%3 != 0) {cout << "0" << endl; return;}
    
    int start = nextDecimal(x);
    
    for(int i =  start; i < INT_MAX; i += 10){
        int friendly = i-d(i);
        if(friendly == x) {cout << "10" << endl; return;}

        if(friendly > x) break;
    }
    cout << "0" << endl;
}

int main(){
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
