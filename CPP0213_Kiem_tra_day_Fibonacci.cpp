#include <iostream>
using namespace std;

int isFibonacci(int n){
	if(n == 0 || n == 1 || n == 2) return 1;
	int a = 1, b = 1, temp;
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
        int n;
        cin >> n;
        int a[n];
        for(int  i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int  i = 0; i < n; i++){
            if(isFibonacci(a[i]) == 1){
                cout << a[i] << " ";
            }
        }
        cout << endl;
	}
}