#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char s[500];
        cin >> s;
        int len = strlen(s);
        bool check = true;
        for (int i = 0; i < len; i++)
        {
            int number = s[i] - '0';
            if (number % 2 != 0)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            for (int i = 0; i < len / 2; i++)
            {
                if (s[i] != s[len - i - 1])
                {
                    check = false;
                    break;
                }
            }
            if (check == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}