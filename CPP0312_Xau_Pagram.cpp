#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        getline(cin >> ws, str);
        int k;
        cin >> k;
        
        // Đặt mảng exist[] để kiểm tra sự tồn tại của các ký tự từ a đễn z trong chuỗi str
        bool exist[150];
        for (int i = 'a'; i <= 'z'; i++)
        {
            exist[i] = false;
        }

        // Duyệt qua từng ký tự của str
        // Nếu tồn tại ký tự nào cho biến exist[] của ký tự đó = true
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            exist[str[i]] = true;
        }

        // Duyệt qua từng ký tự của str
        // Nếu ký tự nào chưa được duyệt tức exist[] của ký tự đó vẫn = false
        // Thì +1 vào need_to_add
        int need_to_add = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (exist[i] == false)
            {
                ++need_to_add;
            }
        }
        
        if (k >= need_to_add)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}