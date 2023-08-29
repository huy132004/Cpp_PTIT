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
        int sum;

        do {
            sum = 0;
            while (n > 0){
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        } while (n > 9);
        
        cout << sum << endl;
    }
}