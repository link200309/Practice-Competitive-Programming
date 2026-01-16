#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, suma=0;
    cin >> n;
    vector<int> arr(2*n);

    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=1; i < 2*n; i+=2){
        if(arr[i] > arr[i-1]){
            suma += arr[i]; 
        } else {
            suma += arr[i-1];
        }
    }

    cout << suma;

    return 0;
}


