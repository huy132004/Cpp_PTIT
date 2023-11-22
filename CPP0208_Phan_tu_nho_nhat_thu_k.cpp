#include <iostream>
#include <math.h>
using namespace std;

void sapXepTang (int n, long a[10000]) {
    for(int i = 0; i < n; i++) {
        int vtmin = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] < a[vtmin]) {
                vtmin = j;
            }
        }
        int temp = a[i];
        a[i] = a[vtmin];
        a[vtmin] = temp;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n,k;
        cin >> n >> k;
        long a[10000];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sapXepTang(n,a);
        cout << a[k-1] << endl;
    }
}