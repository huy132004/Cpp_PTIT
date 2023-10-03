#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int n, int k, int length){
    // Biến count để đếm số phần tử > k trong dãy length chính thức để in ra màn hình 
    // Biến count_temp để đếm số phần tử > k trong dãy length tạm thời
    int count = 0, count_temp;
    // Xét dãy length tạm thời ở đầu dãy số
    for(int i = 0; i < length; i++){
        if(a[i] > k) ++count;
    }

    count_temp = count;
    // Tịnh tiến dãy length tạm thời từng bước dần dần về cuối
    // Bằng cách loại bỏ phần tử đầu và ghép vào phần tử bên phải phần tử đuôi
    for(int i = length; i < n; i++){
        // Nếu phần tử bị bỏ > k và phần tử mới thêm <= k
        if(a[i-length] > k && a[i] <= k){
            --count_temp;
        // Nếu phần tử bị bỏ <= k và phần tử mới thêm > k
        }else if(a[i-length] <= k && a[i] > k){
            ++count_temp;
        }
        // Nếu dãy length tạm thời này có ít phần tử > k hơn dãy length chính thức
        if(count_temp < count) count = count_temp;
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int length = 0;
        // Biến length để đếm độ dài dãy các số <= k sẽ xếp lại
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= k) ++length;
        }
        solve(a, n, k, length);
    }
}