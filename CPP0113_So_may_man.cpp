#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        char s[50];
        cin >> s;
        int len = strlen(s);
        if(s[len-2] == '8' && s[len-1] == '6'){
            cout << 1;
        }else{
            cout << 0;
        }
        cout << endl;
    }
}