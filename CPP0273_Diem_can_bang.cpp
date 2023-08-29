#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        int i;
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum_left = 0;
        int sum_right = 0;
        for(i = 1; i < n; i++){
            sum_right += a[i];
        }
        bool check = false;
        for(i = 1; i < n-1; i++){
            sum_left += a[i-1];
            sum_right -= a[i];
            if(sum_left == sum_right){
                check = true;
                cout << i+1 << endl;
                break;
            }
        }
        if(check == false) cout << -1 << endl;
    }
}