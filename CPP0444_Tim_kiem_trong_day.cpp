#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int result;
        for(int i = 0; i < n; i++){
            if(x == a[i]){
                result = i+1;
                break;
            }
        }
        cout << result << endl;
    }
}