#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
using ll = long long;

int main(){
    int T;
    cin >> T;
    while (T--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = n-1; i >= 0; i--){
            cin >> a[i];
        }
        ll sum = 0;
        ll Pow = 1;
        sum += a[0];
        for(int i = 1; i < n; i++){
            Pow *= x;
            Pow %= mod;
            sum += a[i] * Pow;
            sum %= mod;
        }
        cout << sum << endl;
    }
}