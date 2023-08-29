#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == k){
                ++count;
            }
        }
        if(count > 0){
            cout << count << endl;
        }else{
            cout << -1 << endl;
        }
    }
}