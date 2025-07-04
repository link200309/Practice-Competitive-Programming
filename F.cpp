#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int>ve(N);

    long long suma = 0;

    for(int i = 0; i < N; i++){
        cin >> ve[i];
    }

    sort(ve.begin(), ve.end());

    for(int j = 0; j < N; j++){
        if(suma == ve[j]){
            suma+= ve[j];
        } else if(suma < ve[j]){
            suma = ve[j];
        } else {
            if(j+1 != N){
                if((ve[j] == ve[j+1]) && suma == (ve[j] + ve[j+1])){
                    suma += ve[j] + ve[j+1];
                    j+=1;
                }
            }
        }
    }

    cout << suma << '\n';

    return 0;
}
