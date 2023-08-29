#include <iostream>
using namespace std;

long timMax(long a[100000], int m){
    long max = a[0];
    for(int i = 1; i < m; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

long timMin(long b[100000], int n){
    long min = b[0];
    for(int j = 1; j < n; j++){
        if(b[j] < min){
            min = b[j];
        }
    }
    return min;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int m,n;
        cin >> m >> n;
        long a[100000],b[100000];
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int j = 0; j < n; j++){
            cin >> b[j];
        }
        cout << timMax(a,m) * timMin(b,n) << endl;
    }
}