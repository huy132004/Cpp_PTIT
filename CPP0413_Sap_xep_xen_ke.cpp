#include <iostream>
using namespace std;

int comparator(const void *a, const void *b) {
	return *(int *)a > *(int *)b;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, i,j;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        qsort(a, n, sizeof(int), comparator);
        for(i = 0, j = n-1; i < n/2, j > n/2; i++, j--){
            cout << a[j] << " " << a[i] << " ";
        }
        if(n % 2 == 1){
            cout << a[i] << " ";
        }else{
            cout << a[j] << " " << a[i] << " ";
        }
        cout << endl;
    }
}