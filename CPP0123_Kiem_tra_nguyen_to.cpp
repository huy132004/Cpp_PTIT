#include <iostream>
using namespace std;

bool isPrime(long long n){
    if(n <= 1)  return false;
    if(n == 2 || n == 3 || n == 5 || n == 7)    return true;
    if(n % 2 == 0)  return false;
    for(long long i = 3; i*i <= n; i += 2){
        if(n % i == 0)  return false;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    cout << (isPrime(n) == true ? "YES" : "NO");
}