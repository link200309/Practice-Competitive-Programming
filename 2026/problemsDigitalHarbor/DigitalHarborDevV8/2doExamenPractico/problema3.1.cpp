#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int t){
    int n; cin >> n;
    vector<int> A, B, C;

    for(int i = 1; i <= n; i++){
        int empleado; cin >> empleado;
        
        if(empleado == 1) A.push_back(i);
        else if(empleado == 2) B.push_back(i);
        else C.push_back(i);
    } 

    int equiposMax = min(A.size(), B.size());
    equiposMax = min(equiposMax, (int)C.size());
    cout << equiposMax << endl;
    
    for(int i = 0; i < equiposMax; i++){
        cout << A[i] << " " << B[i] << " " << C[i] << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}