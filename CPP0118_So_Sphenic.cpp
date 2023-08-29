#include <iostream>
using namespace std;

int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int n;
                cin >> n;
                int count = 0, n2 = n;
                bool check = true;
                for(int i = 2; i*i <= n; i++){
                        if(n2 % i == 0){
                                ++count;
                                n2 /= i;
                        }
                        if(n2 % i == 0){
                                check = false;
                                break;
                        }
                }
                if(n2 > 1){
                        ++count;
                }
                if(count == 3 && check == true){
                        cout << 1 << endl;
                }else{
                        cout << 0 << endl;
                }
        }
}