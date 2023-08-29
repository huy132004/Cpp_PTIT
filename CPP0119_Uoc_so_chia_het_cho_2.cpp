#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long n, i, result = 0;
        cin >> n;
        long n2 = n;
        while(n2 % 2 == 0){
        	++result;
        	n2 /= 2;
		}
		for(i = 3; i*i <= n; i++){
			long count = 1;
			while(n2 % i == 0){
        		++count;
        		n2 /= i;
			}
			result *= count;
		}
		if(n2 > 1) result *= 2;
		cout << result << endl;
    }
}
