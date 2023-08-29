#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long a[n];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count_0 = 0;
        for (i = 0; i < n; i++)
        {
            if(a[i] != 0){
                cout << a[i] << " ";
            }else{
                ++count_0;
            }
        }
        while(count_0--){
            cout << 0 << " ";
        }
        cout << endl;
    }
    
}