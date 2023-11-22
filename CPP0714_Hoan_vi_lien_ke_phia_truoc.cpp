#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // Cách làm: Ngược lại với thuật toán sinh hoán vị
        // Tìm vị trí k lớn nhất thảo mãn a[k] > a[k+1]
        int k, l;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                k = i;
            }
        } 
        // Tìm vị trí l lớn nhất từ k+1 đến hết thỏa mãn a[k] > a[l]
        for(int i = k+1; i < n; i++){
            if(a[i] < a[k]){
                l = i;
            }
        }
        // Hoán đổi a[k], a[l], sau đó hoán đổi chuỗi phần tử từ k+1 đến hết
        swap(a[k], a[l]);
        int left = k+1;
        int right = n-1;
        while(left < right){
            swap(a[left], a[right]);
            ++left;
            --right;
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}