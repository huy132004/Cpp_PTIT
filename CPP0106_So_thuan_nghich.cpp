#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char s[20];
        cin >> s;
        int len = strlen(s);
        bool check = true;
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                check = false;
            }
        }
        if (check == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}