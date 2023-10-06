#include <bits/stdc++.h>
using namespace std;

struct MatHang{
    int maso;
    string tenhang;
    string nhomhang;
    float giamua;
    float giaban;
    float loinhuan;
};

void nhap(MatHang &mh, int i){
    mh.maso = i;
    cin.ignore();
    getline(cin, mh.tenhang);
    getline(cin, mh.nhomhang);
    cin >> mh.giamua;
    cin >> mh.giaban;
    mh.loinhuan = mh.giaban - mh.giamua;
}

void sapxep(MatHang mh[100], int N){
    for(int i = 1; i <= N; i++){
        int vtmax = i;
        for(int j = i+1; j <= N; j++){
            if(mh[j].loinhuan > mh[vtmax].loinhuan){
                vtmax = j;
            }
        }
        int k = mh[i].maso; mh[i].maso = mh[vtmax].maso; mh[vtmax].maso = k;
        string s = mh[i].tenhang; mh[i].tenhang = mh[vtmax].tenhang; mh[vtmax].tenhang = s;
        s = mh[i].nhomhang; mh[i].nhomhang = mh[vtmax].nhomhang; mh[vtmax].nhomhang = s;
        float f = mh[i].loinhuan; mh[i].loinhuan = mh[vtmax].loinhuan; mh[vtmax].loinhuan = f;
    }
}

void in(MatHang mh[100], int N){
    for(int i = 1; i <= N; i++){
        cout << mh[i].maso << " ";
        cout << mh[i].tenhang << " ";
        cout << mh[i].nhomhang << " ";
        cout << setprecision(2) << fixed << mh[i].loinhuan;
        cout << endl;
    }
    
}

int main(){
    int N;
    cin >> N;
    MatHang mh[100];
    for(int i = 1; i <= N; i++){
        nhap(mh[i], i);
    }
    sapxep(mh, N);
    in(mh, N);
}