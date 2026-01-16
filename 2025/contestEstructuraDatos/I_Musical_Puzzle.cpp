#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    string mel, aux;
    bool bandera = false;
    unordered_set<string> se;

    while(t--){
        cin >> n >> mel;

        reverse(mel.begin(), mel.end());

        for(int i = 0; i < n; i++){
            aux += mel[i];
            if(bandera){
                se.insert(aux);
                aux = "";
                i -= 1; 
            }
            bandera = !bandera;
        }

        
        cout << se.size() << '\n'; 
        se.clear();
        bandera = false;
        aux="";
    }

    return 0;
}
