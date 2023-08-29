#include <iostream>
using namespace std;

int main(){
	int T;
    cin >> T;
    while (T--){
    	int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
        	cin >> a[i];
        }
        int temp[n];
        for (int i = 0; i < k; i++){
        	temp[i] = a[i];
        }
        for (int i = 0; i < n-k; i++){
        	a[i] = a[i+k];
        }
        for (int i = 0; i < k; i++){
        	a[i+n-k] = temp[i];
        }
        for (int i = 0; i < n; i++){
        	cout << a[i] << " ";
        }
        cout << endl;
    }	
}
