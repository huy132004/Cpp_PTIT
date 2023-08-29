#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int n;
                cin >> n;
                cout << 1 << " ";
                for(int i = 2; i <= n; i++){
                        bool isPrime = true;
                        for(int j = 2; j*j <= i; j++){
                                if(i % j == 0){
                                        isPrime = false;
                                        cout << j << " ";
                                        break;
                                }
                        }
                        if(isPrime == true){
                                cout << i << " ";
                        }
                }
                cout << endl;
        }
}