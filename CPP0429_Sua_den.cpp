#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, b;
    cin >> n >> k >> b;
    vector<bool> den_hong(n, false);
    for(int i = 0; i < b; i++){
        int n;
        cin >> n;
        den_hong[n-1] = true;
    }
    int sua_den_min = 1e6;
    for(int i = 0; i < n-k+1; i++){
        int sua_den = 0;
        for(int j = i; j < i+k; j++){
            if(den_hong[j] == true){
                ++sua_den;
                if(sua_den >= sua_den_min) break;
            }
        }
        sua_den_min = min(sua_den_min, sua_den);
    }
    cout << sua_den_min;
    return 0;
}