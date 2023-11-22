#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll a[], int n){
    ll tich_max = -1e15;
    for(int i = 0; i < n; i++){
        ll tich = 1;
        for(int j = i; j < n; j++){
            if(a[j] == 0 && tich_max > 0) break;
            tich *= a[j];
            if(tich_max < tich) tich_max = tich; 
        }
    }
    cout << tich_max << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        solve(a, n);
    }
}