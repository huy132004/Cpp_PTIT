#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        for(int i = 0; i < n; i++) {
            int vtmin = i;
            for(int j = i+1; j < n; j++) {
                if(b[j] < b[vtmin]) {
                    vtmin = j;
                }
            }
            int temp = b[i];
            b[i] = b[vtmin];
            b[vtmin] = temp;
        }
        int left = 1, right = n;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                left = i+1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(a[i] != b[i]) {
                right = i+1;
                break;
            }
        }
        cout << left << " " << right << endl;
    }
}