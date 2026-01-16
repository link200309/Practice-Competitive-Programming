#include <bits/stdc++.h>
using namespace std;


bool isValid(int x, int w, int h, int n){
    int cap = (x/w) * (x/h);
    return (cap - n) >= 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, n;
    cin >> w >> h >> n;

    int left = 0, right = max(w, h) * n, medio;

    while(left <= right){
        medio = left + (right - left) / 2;

        if(isValid(medio, w, h, n)){
            right = medio - 1;
        } else {
            left = medio + 1;
        }
    }

    cout << left;

    return 0;
}
