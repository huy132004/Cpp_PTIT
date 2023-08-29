#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
    	// Ví dụ ta cần tính tổng 2 số 363 và 99637
        char n1[1000], n2[1000];
        cin >> n1;
        cin >> n2;
		// Gán số 363 là số bé, số 99637 là số lớn
        char *n_longer = n1, *n_shorter = n2;
        int len_longer = strlen(n1), len_shorter = strlen(n2);
        if(strlen(n1) < strlen(n2)){
            n_longer = n2; n_shorter = n1;
            len_longer = strlen(n2); len_shorter = strlen(n1);
        }
		// Gọi các biến chuẩn bị tính tổng
        string sum = "";
        int point_longer = len_longer - 1, point_shorter = len_shorter - 1;
        int number, remember = 0;
        // Vòng lặp cộng sô bé 363 với phần 637 của số lớn
        while(point_shorter >= 0){
            number = n_longer[point_longer] - '0' + n_shorter[point_shorter] - '0';
            number += remember;
            if(number > 9){
                number -= 10;
                remember = 1;
            }else{
                remember = 0;
            }
            sum += number + '0';
            --point_shorter;
            --point_longer;
        }
        // Sau đó mới cộng phần còn lại của số lớn là 99000
        while(point_longer >= 0){
            number = n_longer[point_longer] - '0';
            number += remember;
            if(number > 9){
                number -= 10;
                remember = 1;
            }else{
                remember = 0;
            }
            sum += number + '0';
            --point_longer;
        }
        // Vẫn còn nhớ 1 nữa nên gán số 1 ra hàng cao nhâts
        if(remember == 1) sum += '1';
        //Nãy giờ các hàng bị lôn ngược nên phải đảo lại
        reverse(sum.begin(), sum.end());
        // Kết quả được 100000
        cout << sum << endl;
    }
}