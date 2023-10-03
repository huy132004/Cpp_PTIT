#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long n;
        cin >> n;
        long n2 = n;
        // Cho i chạy đến căn bậc 2 của n
        for (long i = 2; i*i <= n; i++)
        {
            while (n2 % i == 0)
            {
                n2 /= i;
                cout << i << " ";
            }
        }
        // Đoạn này để xét các trường hợp vd 1111 = 11 * 101
        // Nhưng vòng lặp trên sẽ không chạy đến số 101
        if (n2 > 1){
            cout << n2;
        }
        cout << endl;
    }
}