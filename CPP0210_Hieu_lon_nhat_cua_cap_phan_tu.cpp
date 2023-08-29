#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int result = 0;
        bool check = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[j] > a[i] && a[j] - a[i] > result){
                    result = a[j] - a[i];
                    check = true;
                }
            }
        }
        if(check == true){
            cout << result << endl;
        }else{
            cout << -1 << endl;
        }
    }
}