#include <bits/stdc++.h>
using namespace std;

int a[101][101];
bool daCheck[101][101];
int row, col;

void doTim(int i, int j){
    if(i < 0 || i >= row || j < 0 || j >= col) return; // Khi đi quá giới hạn ma trận
    if(a[i][j] == 0 || daCheck[i][j] == true) return;
    daCheck[i][j] = true;
    // 8 hàm đệ quy tương ứng là 8 hướng đi ngang, dọc, chéo trong ma trận
    doTim(i-1, j-1);
    doTim(i-1, j);
    doTim(i-1, j+1);
    doTim(i, j-1);
    doTim(i, j+1);
    doTim(i+1, j-1);
    doTim(i+1, j);
    doTim(i+1, j+1);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        cin >> row >> col;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> a[i][j];
                daCheck[i][j] = false;
            }
        }
        int tong_so_mien = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(a[i][j] == 1 && daCheck[i][j] == false){
                    daCheck[i][j] = true;
                    // 8 hàm đệ quy tương ứng là 8 hướng đi ngang, dọc, chéo trong ma trận
                    doTim(i-1, j-1);
                    doTim(i-1, j);
                    doTim(i-1, j+1);
                    doTim(i, j-1);
                    doTim(i, j+1);
                    doTim(i+1, j-1);
                    doTim(i+1, j);
                    doTim(i+1, j+1);
                    ++tong_so_mien;
                }
            }
        }
        cout << tong_so_mien << endl;
    }
}
