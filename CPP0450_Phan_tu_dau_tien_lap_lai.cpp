#include <iostream>
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
        int complete = false;
        int i,j;
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    complete = true;
                    break;
                }
            }
            if(complete == true) break;
        }
        if(complete == true){
            cout << a[i] << endl;
        }else{
            cout << -1 << endl;
        }
    }
}