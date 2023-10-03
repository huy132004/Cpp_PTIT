#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int tong_chu_so(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int tong_uoc_so(int n){
    vector<int> uoc_so;
    int n_temp = n;
    for(int i = 2; i*i <= n; i++){
        while(n_temp % i == 0){
            uoc_so.push_back(i);
            n_temp /= i;
        }
    }
    if(n_temp > 1) uoc_so.push_back(n_temp);
    int sum = 0;
    for(int x : uoc_so){
        sum += tong_chu_so(x);
    }
    return sum;
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if(isPrime(n) == false){
            if(tong_chu_so(n) == tong_uoc_so(n)){
                cout << "YES";
            } else {
                cout << "NO";
            }
            cout << endl;
        } else{
            cout << "NO" << endl;
        }
        
    }
}