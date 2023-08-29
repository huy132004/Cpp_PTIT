#include <iostream>
using namespace std;

bool isPrime (int x){
    if(x <= 1) return false;
    if(x == 2 || x == 3 || x == 5 || x == 7) return true;
    if(x % 2 == 0) return false;
    for(int i = 3; i*i < x; i++){
        if (x % i == 0)
        {
            return false;
        }
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
        int count = 0;
        int i = 2;
        while(n > 1){
            if(isPrime(i) == true){
                while(n % i == 0){
                    ++count;
                    n /= i;
                }
            }
            if(count > 0){
                cout << i << " " << count << " ";
            }   
            count = 0;
            ++i;
        }
        cout << endl;
    }  
}