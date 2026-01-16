#include <bits/stdc++.h>
using namespace std;


bool isValid(const vector<vector<char>>& ma, int posX, int posY){
    if (posX < 0 || posY < 0 || posX >= ma.size() || posY >= ma[0].size())
        return false;
    return ma[posX][posY] != '#';
}

int recorrer(vector<vector<char>> ma, int posX, int posY, char dir){
    int suma = 0, avance = 0;

    if(isValid(ma, posX, posY)){
        ma[posX][posY] = '#';
        if(dir == 'L'){
            avance = recorrer(ma, posX, posY-1, dir);
            suma = 1 + avance;         
        } else if(dir == 'D'){
            avance = recorrer(ma, posX+1, posY, dir);
            suma = 1 + avance;
        } else if(dir == 'R'){
            avance = recorrer(ma, posX, posY+1, dir);
            suma = 1 + avance;
        } else {
            avance = recorrer(ma, posX-1, posY, dir);
            suma = 1 + avance;
        }

        if(avance == 0){
            if(dir == 'L') dir = 'D';
            if(dir == 'D') dir = 'R';
            if(dir == 'R') dir = 'U';
            if(dir == 'U') dir = 'L';
            suma = 1+recorrer(ma, posX, posY, dir);
        }

    } 

    return suma;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, posX = 0, posY = 0;
    char celda;
    cin >> n >> m;
    vector<vector<char>> ma(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> celda;
            ma[i][j] = celda;

            if(celda == 'L' || celda == 'D' || celda == 'R' || celda == 'U'){
                posX = i;
                posY = j; 
            }
        }
    }

    int celdas = recorrer(ma, posX, posY, ma[posX][posY]);

    cout << celdas;

    return 0;
}


