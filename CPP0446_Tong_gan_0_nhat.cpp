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
        int tong = a[0] + a[1];
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(abs(a[i] + a[j]) < abs(tong)){
                    tong = a[i] + a[j];
                }
            }
        }
        cout << tong << endl;
    }
}