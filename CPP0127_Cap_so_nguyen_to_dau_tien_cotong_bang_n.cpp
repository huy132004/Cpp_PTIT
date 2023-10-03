#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n; 
        bool check = false;
        for(int p = 2; p < n; p++){
            int q = n - p;
            if(isPrime(p) == true && isPrime(q) == true){
                cout << p << " " << q << endl;
                check = true;
                break;
            }
        }
        if(check == false) cout << -1 << endl;
    }
}