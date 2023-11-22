#include <bits/stdc++.h>
using namespace std;

int countStep(vector<int> a, vector<int> a_target, int n){
    int step = 0;
    // Phần tử nào lẻ thì trừ đi 1 để thành chẵn
    while(1){
        for(int i = 0; i < n; i++){
            if(a_target[i] % 2 == 1){
                --a_target[i];
                ++step;
            }
        }
        // Chia tất cả phần tử cho 2
        for(int i = 0; i < n; i++){
            a_target[i] /= 2;
        }
        ++step;
        bool check = true;
        for(int i = 0; i < n; i++){
            if(a_target[i] != 0){
                check = false;
            }
        }
        if(check) break;
    }
    return step - 1;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> a_target(n);
        for(int i = 0; i < n; i++){
            a[i] = 0;
            cin >> a_target[i];
        }
        cout << countStep(a, a_target, n) << endl;;
    }
}