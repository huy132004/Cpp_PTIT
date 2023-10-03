#include <iostream>
using namespace std;

bool isPrime(long long n){
    if(n <= 1)  return false;
    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0)  return false;
    }
    return true;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        cout << (isPrime(n) == true ? "YES" : "NO") << endl;
    }
    
}