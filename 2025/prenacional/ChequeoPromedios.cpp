#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, p, p1,p2,p3, f;
    cin >> T;
    while(T--){
        cin >> p >> p1 >> p2 >> p3 >> f;

        p1 = max(p1, p2);
        p2 = max(p2, p3);

        if((p * 0.15 + 0.45*((p1+p2))/2 + 0.4 * f) > 50){
            cout << "Si" << "\n";
        } else {
            cout << "No" << "\n" ;
        } 
    }

    return 0;
}
