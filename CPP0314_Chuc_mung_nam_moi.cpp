#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char s[n][30];
    for(int i = 0; i < n; i++){
        cin.getline(s[i],30);
    }
    
    bool print[n] = {true};
    int result = n;
    for (int i = 0; i < n; i++)
    {
        if (print[i] == true)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(s[i], s[j]) == 0)
                {
                    print[j] = false;
                    --result;
                }
            }
        }
    }
    cout << result;
}