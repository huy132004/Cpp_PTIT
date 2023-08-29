#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long x=1;
		for(long long i=2;i<=n;i++){
			 x=(i*x)/(__gcd(i,x));
		}
		cout << x << endl;
	} return 0;
}