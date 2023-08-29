#include <iostream>
using namespace std;
#define ll long long

int isFibonacci(ll n){
	if(n == 0 || n == 1 || n == 2) return 1;
	ll a = 1, b = 1, temp;
    while(b < n){
    	temp = b;
     	b += a;
      	a = temp;
	}
	if(b == n) return 1;
	return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        if(isFibonacci(n) == 1){
        	cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}