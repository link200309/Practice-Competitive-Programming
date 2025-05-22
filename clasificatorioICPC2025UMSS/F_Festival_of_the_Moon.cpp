#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, p, v, suma, cant;

    cin >> a >> p >> v;

    suma = p*(v/2);
    cant = p;

    while (suma != a){
        suma -= (v/2);
        suma += v; 
        cant--;
    }

    cout << cant;
    return 0;
}


