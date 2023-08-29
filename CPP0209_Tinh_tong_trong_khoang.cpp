#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n,Q;
        cin >> n >> Q;
        long a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        while(Q--){
        	int L,R;
            cin >> L >> R;
            int sum = 0;
            for(int i = L-1; i < R; i++){
            	sum += a[i];
            }
            cout << sum << endl;
        }
    }
}