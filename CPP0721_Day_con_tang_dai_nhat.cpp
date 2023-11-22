#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int N){
    int result = 0;
    for(int i = 0; i < N; i++){
        int result_temp = 1;
        int temp = a[i];
        for(int j = i+1; j < N; j++){
            if(a[j] > temp){
                temp = a[j];
                ++result_temp;
            }
        } 
        if(result < result_temp){
            result = result_temp;
        }  
    }
    cout << result << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> a(N);
        for(int i = 0; i < N; i++){
            cin >> a[i];
        }
        solve(a, N);
    }
}