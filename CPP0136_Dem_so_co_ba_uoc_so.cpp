#include<bits/stdc++.h>
using namespace std;

bool isPrime(long i){
    if(i <= 1) return false;
    for(int j = 2; j*j <= i; j++){
        if(i % j == 0) return false;
    }
    return true;
}

void solve(long n){
    int count  = 0;
    for(long i = 0; i*i <= n; i++){
        if(isPrime(i) == true){
            ++count;
        }
    }
    cout << count << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        long n;
        cin >> n;
        solve(n);
    }
    
}