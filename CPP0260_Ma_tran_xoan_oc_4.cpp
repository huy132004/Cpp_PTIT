#include <bits/stdc++.h>
using namespace std;

void sapXepTang(int arr[1000], int n){
    for (int i = 0; i < n * n; i++){
        int vtmin = i;
        for (int j = i + 1; j < n * n; j++){
            if (arr[j] < arr[vtmin]){
                vtmin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[vtmin];
        arr[vtmin] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr_in[1000];
    int i, j;
    // Nhập ma trận dưới dạng mảng 1 chiều
    for (i = 0; i < n * n; i++)
    {
        cin >> arr_in[i];
    }
    //Sắp xếp tăng
    sapXepTang(arr_in, n);
    // Gán các phần tử arr_in vào arr_out theo thứ tự xoắn ốc
    int arr_out[n][n] = {0};
    i = 0;
    j = 0;
    int count = 0, point = 0;
    while (1){
        i = point;
        for (j = point; j < n - point; j++){
            arr_out[i][j] = arr_in[count];
            ++count;
        }
        if (count == n * n) break;

        j = n - point - 1;
        for (i = point + 1; i < n - point; i++){
            arr_out[i][j] = arr_in[count];
            ++count;
        }
        if (count == n * n) break;

        i = n - point - 1;
        for (j = n - point - 2; j >= point; j--){
            arr_out[i][j] = arr_in[count];
            ++count;
        }
        if (count == n * n) break;

        j = point;
        for (i = n - point - 2; i >= point + 1; i--){
            arr_out[i][j] = arr_in[count];
            ++count;
        }
        if (count == n * n) break;

        ++point;
    }
    // In ra arr_out
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << arr_out[i][j] << " ";
        }
        cout << endl;
    }
}