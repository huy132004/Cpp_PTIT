#include<bits/stdc++.h>
using namespace std;

int solve(int n, int x, vector<int> a){
    sort(a.begin(), a.end());
    int mid = a[a.size()/2];
    int check = 0;
    for(int i = 0; i < n; i++){
        if(binary_search(a.begin(), a.end(), a[i] - k)
        || binary_search(a.begin(), a.end(), a[i] + k)){
            return 1;
        }
    }
    return -1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(n, x, a) << endl;
    }
}