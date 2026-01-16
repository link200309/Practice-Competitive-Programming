#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char n;
    string pilaInver;
    stack<char> pila;

    while(cin >> n){
        if(!pila.empty() && n == pila.top()){
            pila.pop();
        } else {
            pila.push(n);
        }
    }

    while(!pila.empty()){
        pilaInver += pila.top();
        pila.pop();
    }
    
    reverse(pilaInver.begin(), pilaInver.end());

    cout << pilaInver;

    return 0;
}
