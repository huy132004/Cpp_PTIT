#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int i;
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        bool check = false;
        for(i = 0; i < n; i++){
            if(k == a[i]){
                check = true;
                break;
            }
        }
        if(check == true){
            cout << i+1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
}