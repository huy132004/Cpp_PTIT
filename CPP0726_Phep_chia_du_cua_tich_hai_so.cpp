#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll add(ll a, ll b, ll c){
    if (b == 0) return 0;
    ll x = add(a, b/2, c);
    if(b % 2 == 0){
        ll result = (2 * (x % c)) % c;
        return result;
    } else {
        ll result = (a % c + 2 * (x % c)) % c;
        return result;
    }
}

int main(){
    int T;
    cin >> T;
    while (T--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << add(a, b, c) << endl;
    }
}