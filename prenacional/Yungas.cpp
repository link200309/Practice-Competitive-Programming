#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isValid(vector<ll> &ve, ll medio, ll T){
    ll suma = 0;
    stack<ll> st;

    if(medio > T) return false;

    for(int i = 0; i < ve.size(); i++){
        if(ve[i] == medio) return true;
        suma = ve[i];
        st.push(ve[i]);
        for(int j = i+1; j < ve.size(); j++ ){ 
            if(suma + ve[j] == medio) return true;
            if(suma + ve[j] < medio){
                suma += ve[j];
                st.push(ve[j]);
            } else {
                suma -= st.top();
                st.pop(); 
                j--;
                if(suma == 0) break;
            }
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, T, suma = 0; 
    cin >> N >> T;
    vector<ll> ve(N);

    for(ll &x : ve ){
        cin >> x;
        suma += x;
    } 
    sort(ve.begin(), ve.end());

    if(ve[0] > T){
        cout << 0 << "\n";
        return 0;
    }
    
    ll left =  ve[0], right = suma, medio;
    
    while(left <= right){
        medio = left + (right - left)/2;
        cout << "El left es " << left << endl;
        cout << "El medio es " << medio << endl;
        cout << "El right es " << right << endl;
        if(isValid(ve, medio, T)){
            left = medio + 1;
        } else {
            if(medio < T){
                left = medio + 1;
            } else {
                right = medio - 1;
            }
        }
    }


    cout << right << "\n";


    return 0;
}
