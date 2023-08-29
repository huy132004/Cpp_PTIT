#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
    	// Ví dụ ta cần tính hiệu 2 số 363 và 100000
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
        //Trường hợp số chữ số 2 số bằng nhau
        if(strlen(n1) == strlen(n2)){
        	if(strcmp(n1,n2) < 0){
            	n_longer = n2; n_shorter = n1;
                len_longer = strlen(n2); len_shorter = strlen(n1);
            }
        }
		// Gọi các biến chuẩn bị tính hiệu
        string difference = "";
        int point_longer = len_longer - 1, point_shorter = len_shorter - 1;
        int number, remember = 0;
        // Vòng lặp trừ phần 000 của số lớn cho số bé 363
        while(point_shorter >= 0){
            number = n_longer[point_longer] - n_shorter[point_shorter];
            number -= remember;
            if(number < 0){
                number += 10;
                remember = 1;
            }else{
                remember = 0;
            }
            difference += number + '0';
            --point_shorter;
            --point_longer;
        }
        // Sau đó mới cộng phần còn lại của số lớn
        while(point_longer >= 0){
            number = n_longer[point_longer] - '0';
            number -= remember;
            if(number < 0){
                number += 10;
                remember = 1;
            }else{
                remember = 0;
            }
            difference += number + '0';
            --point_longer;
        }
        //Nãy giờ các hàng bị lôn ngược nên phải đảo lại
        reverse(difference.begin(), difference.end());
        // Kết quả được 99637
        cout << difference << endl;
    }
}