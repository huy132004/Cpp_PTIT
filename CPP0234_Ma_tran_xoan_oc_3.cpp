#include <bits/stdc++.h>
using namespace std;

int i, j;
vector<int> result;


void solve(int row, int column, vector<vector<int>> a){
    i = 0; j = 0;
    int count = 0, point = 0;
    result.clear();
    while (1){
        i = point;
        for (j = point; j < column - point; j++){
            result.push_back(a[i][j]);
            ++count;
        }
        if (count == row * column) break;

        j = column - point - 1;
        for (i = point + 1; i < row - point; i++){
            result.push_back(a[i][j]);
            ++count;
        }
        if (count == row * column) break;

        i = row - point - 1;
        for (j = column - point - 2; j >= point; j--){
            result.push_back(a[i][j]);
            ++count;
        }
        if (count == row * column) break;

        j = point;
        for (i = row - point - 2; i >= point + 1; i--){
            result.push_back(a[i][j]);
            ++count;
        }
        if (count == row * column) break;

        ++point;
    }
}

int main(){
    int cases;
    cin >> cases;
    while (cases--){
        int row, column, k;
        cin >> row >> column >> k;
        vector<vector<int>> a(row,vector<int>(column));
        for (i = 0; i < row; i++){
            for (j = 0; j < column; j++){
                cin >> a[i][j];
            }
        }
        solve(row, column, a);
        cout << result[k-1] << endl;
    }
}