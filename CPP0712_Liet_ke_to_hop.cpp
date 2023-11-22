#include <bits/stdc++.h>
using namespace std;

int n, k, dem = 0;

void sinhToHop(string s, int i, int dem){
    s += to_string(i);
    ++dem;
    // Đếm chuỗi s có đủ k phần tử ghép vào chưa
    // Trong trường hợp n >= 10 không dùng s.length() == k được
    if(dem == k){
        cout << s << " ";
        return;
    }
    for(int j = i+1; j <= n; j++){
        sinhToHop(s, j, dem);
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        cin >> n >> k;
        string s;
        for(int i = 1; i <= n-k+1; i++){
            sinhToHop(s, i, dem);
        }
        cout << endl;
    }
}