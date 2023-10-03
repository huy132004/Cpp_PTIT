#include <bits/stdc++.h>
using namespace std;

/*
Giải thích thuật toán: 
Giả sử cho ma trận    Sau khi biến đổi:
    1  2                  4  3
    3  4                  3  4
Ta thấy sau khi biến đổi tổng bất kỳ hàng hay cột nào cũng là 7,
cũng là tổng của hàng lớn nhất trước khi biến đổi;
Mỗi phép biến đổi giúp tăng thêm 1 đơn vị vào 1 phần tử,
vậy nên số phép biến đổi chính là tổng các phần tử sau khi 
biến đổi trừ đi tổng các phần tử trước khi biến đổi;
Tổng các phần tử tính bằng cách nhập phần tử đến đâu cộng dồn đến đó;
Tổng các phần tử sau biến đổi tính bằng cách nhân hàng hoặc cột 
có tổng lớn nhất với số hàng;
*/
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n][n];
        long sum_before = 0, sum_after = 0;

        // Nhập mảng kết hợp tính tổng các phần tử trước khi biến đổi
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                sum_before += a[i][j];
            }
        }

        // Tìm ra hàng có tổng lớn nhất
        vector <int> sum_row(n);
        int sum_row_max = 0;
        for (int i = 0; i < n; i++)
        {  
            for(int j = 0; j < n; j++){
                sum_row[i] += a[i][j];
                
            }
            if(sum_row_max < sum_row[i]){
                sum_row_max = sum_row[i];
            }
        }

        // Tìm ra cột có tổng lớn nhất
        vector <int> sum_column(n);
        int sum_column_max = 0;
        for (int j = 0; j < n; j++)
        {  
            for(int i = 0; i < n; i++){
                sum_column[j] += a[i][j];
            }
            if(sum_column_max < sum_column[j]){
                sum_column_max = sum_column[j];
            }
        }
        
        // Tìm ra hàng hoặc cột có tổng lớn nhất
        int sum_line_max;
        if(sum_row_max > sum_column_max){
            sum_line_max = sum_row_max;
        }else{
            sum_line_max = sum_column_max;
        }

        // Tổng các phần tử sau khi biến đổi
        // Bằng hàng hoặc cột có tổng lớn nhất nhân với số hàng
        sum_after = sum_line_max * n;

        // Tổng các phần tử sau biến đổi trừ đi trước biến đổi là kết quả cần tìm
        cout << sum_after - sum_before << endl;
    }
}