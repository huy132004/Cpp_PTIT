#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0, n2 = n;
        /*Thuật toán: Cho i chạy từ 2 đến căn bậc 2 của n, mỗi vòng lặp mà n chia hết cho i 
        thì ++count, liên tục kiểm tra xem count đã đạt đến k chưa, khi đạt đến k thì in ra i*/
        for (int i = 2; i * i <= n; i++)
        {
            while (n2 % i == 0)
            {
                n2 /= i;
                ++count;
                if (count == k)
                {
                    cout << i << endl;
                    break;
                }
            }
            if (count == k)
                break;
        }
        //Các trườn hợp ngoại lệ, ví dụ số 1111 = 11 * 111, vòng lặp trên sẽ không chạy đến số 111
        //Do đó thêm đoạn này để xét số 111
        if(n2 > 1){
            ++count;
            if(count == k){
                cout << n2 << endl;
            }
        }
        //Nếu count chưa đạt đến k thì in ra -1
        if(count < k){
            cout << -1 << endl;
        }
    }
}