#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, sum=0;
    string pal;
    cin >> t;
    
    while(t-- > 0){
        cin >> n;
        unordered_map<string, int> ma;
        vector<vector<string>> grilla(3, vector<string>(n));
    
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                cin >> pal;
                ma[pal]++;
                grilla[i][j] = pal;
            }
        }

        for(vector<string> player:grilla){
            for(string palabra : player){
                if(ma[palabra] == 1) sum += 3;
                if(ma[palabra] == 2) sum += 1;
            }
            cout << sum << ' ';
            sum=0;
        }
        cout << '\n';
    }

    return 0;
}
