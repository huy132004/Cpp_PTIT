#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long n;
        cin >> n;
        long n_temp = n;
        long uocSoMax;
        for(long i = 2; i*i <= n; i++){
            while(n_temp % i == 0){
                n_temp /= i;
                uocSoMax = i;
            }
        }
        if(n_temp > 1){
            uocSoMax = n_temp;
        }
        cout << uocSoMax << endl;
    }
}