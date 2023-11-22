#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Do mảng con có tính liên tục,
nên với mỗi phần tử a[i] ta chỉ có hai lựa chọn: 
một là tổng con đang >= 0 thì cộng thêm a[i] vào tổng con, 
hai là tổng con đang < 0 thì bỏ luôn tổng con, chỉ lấy a[i].
*/

void solve(ll a[], int n){
    ll sum_max = a[0];
    ll sum = a[0];
    for(int i = 1; i < n; i++){
        if(sum >= 0) sum += a[i];
        else sum = a[i];
        sum_max = max(sum, sum_max);
    }
    cout << sum_max << endl;
    /*
    MỞ RỘNG RA TÌM VỊ TRÍ ĐẦU CUỐI CỦA TẬP CON:

    int begin_pos = 0, end_pos = 0;
    for(int i = 1; i < n; i++){
        if(sum >= 0){
            sum += a[i];
            if(sum_max < sum){
                sum_max = sum;
                end_pos = i;
            }
        } else {
            sum = a[i];
            if(sum_max < sum){
                sum_max = sum;
                begin_pos = end_pos = i;
            }
        }
    }
    */ 
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        solve(a, n);
    }
}