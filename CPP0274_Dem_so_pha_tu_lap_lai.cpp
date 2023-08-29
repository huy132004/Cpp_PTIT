#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        bool check[n] = {false};
        for (int i = 0; i < n; i++)
        {
            if (check[i] == false)
            {
                check[i] = true;
                bool first = false;
                for (int j = i + 1; j < n; j++)
                {
                    if (check[j] == false){
                        
                        if (a[j] == a[i])
                        {   
                            check[j] = true;
                            if (first == false)
                            {
                                first = true;
                                count += 2;
                            }
                            else
                            {
                                count += 1;
                            }
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
}