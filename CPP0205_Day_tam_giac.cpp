#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        unsigned n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0;
        while(a[i] <= a[i+1]){
            ++i;
        }
        cout << a[i] << endl;
    }
}