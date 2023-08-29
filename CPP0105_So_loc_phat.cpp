#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char s[10];
        cin >> s;
        int len = strlen(s);
        bool check = true;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0' && s[i] != '6' && s[i] != '8')
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