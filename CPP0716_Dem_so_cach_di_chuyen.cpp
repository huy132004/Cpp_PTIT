#include<bits/stdc++.h>
using namespace std;

void doTimHuongDi(int a[][21], int n, int k, int i, int j, int tong, int dem){
    if(i == n || j == n) return; // Điều kiện vượt quá mảng
    tong += a[i][j];
    if(tong > k) return; 
    if(i == n-1 && j == n-1){ // Điều kiện đến điểm cuối
        if(tong == k){
            ++dem;
            return;
        }
    }
    // 2 hàm đệ quy tương ứng 2 hướng đi: sang phải hoặc đi xuống
    doTimHuongDi(a, n, k, i+1, j, tong, dem);
    doTimHuongDi(a, n, k, i, j+1, tong, dem);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int a[21][21], dem = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        doTimHuongDi(a, n, k, 0, 0, 0, dem);
        cout << dem << endl;
    }
}