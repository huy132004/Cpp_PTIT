#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        long long k;
        cin >> n >> k;
        long long sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i % k;
        }
        if(sum == k){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}