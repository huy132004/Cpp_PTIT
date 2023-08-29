#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int T;
    cin >> T;
    while(T--){

        ll n, i;
        cin >> n;
        ll a[n];
        for(i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        ll kcmin = a[1] - a[0];
        for(i = 1; i < n; i++){
            if(a[i+1] - a[i] < kcmin){
                kcmin = a[i+1] - a[i];
            }
        }
        cout << kcmin << endl;
    }
}