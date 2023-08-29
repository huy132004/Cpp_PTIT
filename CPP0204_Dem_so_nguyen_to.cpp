#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

bool isPrime(int i){
	if(i <= 1) return false;
	if(i == 2 || i == 3 || i == 5 || i == 7){
		return true;
	}
	if(i % 2 == 0) return false;
	for(int j = 3; j*j <= i; j++){
		if(i % j == 0) return false;
	}
	return true;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
    	int l,r;
    	cin >> l >> r;
    	int count = 0;
    	for(int i = l; i <= r; i++){
    		if(isPrime(i) == true){
    			++count;
			}
		}
		cout << count << endl;
	}
}
