#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>> &a, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(a[i][j] == 'O'){
                if(i != 0 && i != row-1 && j != 0 && j != column-1){
                    a[i][j] = 'X';
                }
            }
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int row, column;
        cin >> row >> column;
        vector<vector<char>> a(row,vector<char>(column));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cin >> a[i][j];
            }
        }

        solve(a, row, column);

        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}