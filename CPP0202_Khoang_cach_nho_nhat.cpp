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
        for(int i = 0; i < n; i++){
            int vtmin = i;
            for(int j = i+1; j < n; j++){
                if(a[j] < a[vtmin]){
                    vtmin = j;
                }
            }
            int temp = a[i];
            a[i] = a[vtmin];
            a[vtmin] = temp;
        }
        int kcmin = abs(a[0] - a[1]);
        for(int i = 1; i < n-1; i++){
            if(abs(a[i] - a[i+1]) < kcmin){
                kcmin = abs(a[i] - a[i+1]);
            }
        }
        cout << kcmin << endl;
    }
}