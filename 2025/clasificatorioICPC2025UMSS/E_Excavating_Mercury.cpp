#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num, menor, suma = 0;
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> num;
        if(i == 0) menor = num;
        if(num <= menor){
            menor = num;
        }
        arr[i] = num;
    }

   

    for(int i = 0; i < n; i++){
        suma = suma + arr[i]-menor;
    }
    cout << suma;
    return 0;
}


