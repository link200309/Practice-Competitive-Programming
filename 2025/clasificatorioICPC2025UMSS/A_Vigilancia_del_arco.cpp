#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, disLin = 0, distCir=0, menor=0, maximo = 0;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    maximo = arr[n-1];

    disLin = maximo - arr[0];
     
    disLin++;

    for(int i =0; i < n; i++){
        if(i+1 !=n){
            distCir = arr[i] + 360-arr[i+1]+1;
    
    
            if(disLin <= distCir){
                menor = disLin;
            } else {
                menor = distCir;
            }
        }
    }

     cout << menor;

    return 0;
}


