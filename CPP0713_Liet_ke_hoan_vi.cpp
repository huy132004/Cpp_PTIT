#include <bits/stdc++.h>
using namespace std;

void SinhHoanVi(string num, int n){
    int k = -1, l;
    // Tìm vị trí k lớn nhất thỏa mãn num[k] < num[k+1]
    for(int i = 0; i < n-1; i++){
        if(num[i] < num[i+1]){
            k = i;
        }
    }
    if(k == -1) return;
    // Tìm vị trí l lớn nhất từ k+1 đến cuối thỏa mãn num[k] < num[l]
    for(int i = k + 1; i < n; i++){
        if(num[i] > num[k]){
            l = i;
        }
    }
    // Đảo chữ số 2 vị trí k và l, sau đó đảo ngược chuỗi từ k+1 đến cuối
    swap(num[k], num[l]);
    int left = k + 1;
    int right = n - 1;
    while(right > left){
        swap(num[left], num[right]);
        ++left;
        --right;
    }
    std::cout << num << " ";
    SinhHoanVi(num, n);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string num = "";
        for(int i = 1; i <= n; i++){
            num += i + '0';
        }
        std::cout << num << " ";
        SinhHoanVi(num, n);
        std::cout << endl;
    }
}