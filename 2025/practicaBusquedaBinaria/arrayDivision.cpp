#include <bits/stdc++.h>
using namespace std;

bool isValid(int medio, int k, vector<int> &ve, int n){
    int suma = 0, grupos = 0;

    for (int i = 0; i < n; i++){
        if(ve[i] > medio) return false;
        if(suma + ve[i] > medio){
            grupos++;
            suma = 0;
        }
        suma += ve[i];
    }
    if(suma > 0) grupos++;
    return grupos <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, right = 0;
    cin >> n >> k;
    vector<int> ve(n);

    for(int &x : ve) {
        cin >> x;
        right += x;
    }

    int left = 0, medio;

    while( left <= right){
        medio = left + (right - left) / 2;

        if(isValid(medio, k, ve, n)){
            right = medio - 1;
        } else {
            left = medio + 1;
        }
    }

    cout << left;

    return 0;
}
