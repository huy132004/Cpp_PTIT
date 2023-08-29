#include <iostream>
using namespace std;

long long UCLN (long long a, long long b){
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

long long BCNN(long long a, long long b){
    return a * b / UCLN(a,b);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a,b;
        cin >> a >> b;
        cout << BCNN(a,b) << " ";
        cout << UCLN(a,b) << endl;
    }
}