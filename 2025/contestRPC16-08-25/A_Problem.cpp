#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int moreBigger (int i, int j, int r, int s, vector<vector<int>> &ma) {
    int mayor = -2e9;
    for(int x = i; x < i+r; x++){
        for(int y = j; y < j+s; y++){  
            if(ma[x][y] > mayor) mayor = ma[x][y]; 
        }
    }
    return mayor;
}

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> ma(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){  
            cin >> ma[i][j]; 
        }
    }

    int r, s; cin >> r >> s;

    for(int i = 0; i <= n - r; i++){
        for(int j = 0; j <= m - s; j++){
            cout << moreBigger(i, j, r, s, ma) << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
