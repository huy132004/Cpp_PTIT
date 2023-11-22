#include <bits/stdc++.h>
using namespace std;

long sum_max;

void doTim(int a[], int isPicked[], int N, int i, int pick, long sum){
    if(i == N) return;
    isPicked[i] = pick;
    if(isPicked[i-1] == 0){
        sum += isPicked[i] * a[i];
    }
    sum_max = max(sum_max, sum);
    doTim(a, isPicked, N, i+1, 0, sum);
    doTim(a, isPicked, N, i+1, 1, sum);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int a[N], isPicked[N];
        sum_max = -1e9;
        long sum = 0;
        for(int i = 0; i < N; i++){
            cin >> a[i];
        }
        doTim(a, isPicked, N, 0, 0, sum);
        doTim(a, isPicked, N, 0, 1, sum);
        cout << sum_max << endl;
    }
}