#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> a, int row, int column){
    vector<int> check_row(row, 1);
    vector<int> check_column(column, 1);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(a[i][j] == 0){
                check_row[i] = 0;
                check_column[j] = 0; 
            }
        }    
    }
    int count_row = 0;
    for(int x : check_row){
        if(x) ++count_row;
    }
    int count_column = 0;
    for(int x : check_column){
        if(x) ++count_column;
    }
    cout << (count_row >= count_column ? count_row : count_column) << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        int row, column;
        cin >> row >> column;
        vector<vector<int>> a(row, vector<int>(column));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cin >> a[i][j];
            }
        }
        solve(a, row, column);
    }
}