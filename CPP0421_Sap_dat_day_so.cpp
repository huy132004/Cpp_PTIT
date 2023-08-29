#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long n;
        cin >> n;
        long long a[n];
        for(long i = 0; i < n; i++){
            cin >> a[i];
        }
        long long b[n] = {0};
        for (long i = 0; i < n; i++)
        {   
            bool check = false;
            for (long j = 0; j < n; j++)
            {
                if(a[j] == i){
                    check = true;
                    b[i] = i;
                }
            }
            if(check == false){
                b[i] = -1;
            }
        }
        for(long i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}