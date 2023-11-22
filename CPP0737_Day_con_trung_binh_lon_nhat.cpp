#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int k){
    long sum_max;
    long sum = 0;
    int end_pos = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    sum_max = sum;
    for(int i = 0; i < n-k; i++){
        sum = sum - a[i] + a[i+k];
        if(sum_max < sum){
            sum_max = sum;
            end_pos = i+1;
        }
    }
    for(int i = end_pos; i < end_pos + k; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        solve(a, n, k);
    }
}