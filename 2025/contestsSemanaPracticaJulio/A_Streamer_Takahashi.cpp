#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, L, R; cin >> N >> L >> R;
    
    int c = 0;
    while(N--){
        int x, y; cin >> x >> y;

        if(x <= L && y >= R){
            c++;
        }
    }

    cout << c << "\n";

    return 0;
}
