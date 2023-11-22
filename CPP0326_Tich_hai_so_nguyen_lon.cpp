#include <bits/stdc++.h>
using namespace std;

string TichMotSoNguyenLonVaMotChuSo(string X, char y){
    string result;
    int len_X = X.length();
    int soDu = 0;
    for(int i = len_X-1; i >= 0; i--){
        int temp = (X[i]-'0') * (y-'0') + soDu;
        soDu = temp / 10;
        result += (temp % 10) + '0';
    }
    if(soDu > 0) result += soDu + '0';
    string result_reverse;
    for(int i = result.length()-1; i >= 0; i--){
        result_reverse += result[i];
    }
    return result_reverse;
}
string TongHaiSoNguyenLon(string num1, string num2){
    string result;
    if(num1.length() > num2.length()) swap(num1, num2);
    while(num1.length() != num2.length()) num1.insert(0, "0");
    int len = num1.length();
    int soDu = 0;
    for(int i = len-1; i >= 0; i--){
        int temp = num1[i] - '0' + num2[i] - '0' + soDu;
        soDu = temp / 10;
        result += (temp % 10) + '0';
    }
    if(soDu > 0) result += soDu + '0';
    string result_reverse;
    for(int i = result.length()-1; i >= 0; i--){
        result_reverse += result[i];
    }
    return result_reverse;
}

void TichHaiSoNguyenLon(string X, string Y){
    vector<string> cacSoHang;
    int themSo0 = 0;
    int len_X = X.length(), len_Y = Y.length();
    for(int i = len_Y - 1; i >= 0; i--){
        string num = TichMotSoNguyenLonVaMotChuSo(X, Y[i]);
        for(int j = 0; j < themSo0; j++){
            num += '0';
        }
        ++themSo0;
        cacSoHang.push_back(num);
    }
    string result = "";
    for(int i = 0; i < cacSoHang.size(); i++){
        result = TongHaiSoNguyenLon(result, cacSoHang[i]);
    }
    cout << result << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string X, Y;
        cin >> X >> Y;
        TichHaiSoNguyenLon(X, Y);
    }
}