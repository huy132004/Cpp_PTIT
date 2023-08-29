#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll bcnn(ll a, ll b){
	return a*b/(__gcd(a,b));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x,y,z;
		ll n;
		cin >> x>> y>>z>>n;
		ll a=pow(10,n-1);
		ll b=pow(10,n);
		ll c= bcnn(x,bcnn(y,z));
		if(c>=b){ cout <<-1<< endl;
		} else{
			if(a%c==0){ cout <<a << endl;
			} else { ll k=a/c;
			    cout<< (k+1)*c << endl;
			}
    }
}
    return 0;
}