#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&ve, int medio, int K, vector<int>&res){
    int complemento;
    for(int i = 0; i < ve.size(); i++){
        complemento = medio - ve[i]; // medio = j - i // i + j = k
        auto it = find(ve.begin()+i, ve.end(), complemento);
        if(it != ve.end() && medio <= K){
            ve[0] = ve[i];
            ve[1] = complemento;
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    vector<int>ve(N);
    vector<int>res(2);

    cin >> N;

    for(int &x : ve) cin >> x;
    sort(ve.begin(), ve.end());

    cin >> M;

    int left = 0, right = 2e6 + 5, medio;

    while(left <= right){
        medio = left + (right - left)/2;
        if(isValid(ve, medio, M, res)){
            left = medio + 1;
        } else {
            right = medio - 1;
        }
    }
    
    cout << res[0] << " " << res[1] << '\n';
    
    return 0;
}
