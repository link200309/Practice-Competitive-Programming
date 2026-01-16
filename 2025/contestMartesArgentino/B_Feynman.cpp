#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
   
void solve(){
    int N;

    while(cin >> N){
        if(N == 0) return;

        int cant = 0;
    
        for(int i = 1; i <= N; i++){
            cant += (N - i + 1) * (N - i + 1); 
        }
        cout << cant << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
