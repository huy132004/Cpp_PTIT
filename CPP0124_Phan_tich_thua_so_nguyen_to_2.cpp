#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count  = 0, n2 = n;
    for(int i = 2; i*i <= n; i++){
        while(n2 % i == 0){
            n2 /= i;
            ++count;
        }
        if(count > 0){
            cout << i << " " << count << endl;
            count = 0;
        }
    }
    /* Thêm dòng này để fix các số ví dụ 1111 = 11 * 101
    nhưng vòng lặp trên sẽ không chạy đến 101 */
    if (n2 > 1) cout << n2 << " " << 1;
}