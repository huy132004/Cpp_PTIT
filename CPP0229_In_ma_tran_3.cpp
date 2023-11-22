#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int row, col;
        cin >> row >> col;
        int a[row][col];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> a[i][j];
            }
        }
        int i = 0, j = 0;
        cout << a[i][j] << " ";
        while(1){
            // Đi sang phải, nếu ko sang phải dc thì xuống dưới
            if(j+1 < col) ++j;
            else ++i;
            cout << a[i][j] << " ";
            if(i == row-1 && j == col-1) break;
            
            // Xuống trái liên tục đến khi ko đi được nữa
            while(1){
                ++i; --j;
                cout << a[i][j] << " ";
                if(i == row-1 || j == 0) break;
            }
            if(i == row-1 && j == col-1) break;

            // Đi xuống, nếu ko đi xuống dc thì sang phải
            if(i+1 < row) ++i;
            else ++j;
            cout << a[i][j] << " ";
            if(i == row-1 && j == col-1) break;

            // Lên phải liên tục đến khi ko đi được nữa
            while(1){
                --i; ++j;
                cout << a[i][j] << " ";
                if(i == 0 || j == col-1) break;
            }
            if(i == row-1 && j == col-1) break;
        }
        cout << endl;
    }
}