#include <bits/stdc++.h>
using namespace std;

vector<int> nam(100, 0), thang(100, 0), ngay(100, 0);

struct Nguoi{
    string ten;
    string ngaySinh;
};

void nhapDuLieuNgaySinh(string ngaySinh, int i){
    // Hàm substr lấy ra chuỗi cần lấy
    // Tham số đầu là vị trí cần lấy, tham số thứ hai là độ dài chuỗi cần lấy
    ngay[i] = stoi(ngaySinh.substr(0,2));
    thang[i] = stoi(ngaySinh.substr(3,2));
    nam[i] = stoi(ngaySinh.substr(6,4));
}

void nhap(Nguoi &ds, int i){
    cin >> ds.ten >> ds.ngaySinh;
    nhapDuLieuNgaySinh(ds.ngaySinh, i);
}

void timGiaNhat(Nguoi ds[50], int N){
    for(int i = 0; i < N; i++){
        int vtGiaNhat = i;
        for(int j = i+1; j < N; j++){
            if(nam[j] < nam[vtGiaNhat]){
                vtGiaNhat = j;
            }else if(nam[j] == nam[vtGiaNhat]){
                if(thang[j] < thang[vtGiaNhat]){
                    vtGiaNhat = j;
                }else if(thang[j] == thang[vtGiaNhat]){
                    if(ngay[j] < ngay[vtGiaNhat]){
                        vtGiaNhat = j;
                    }
                }
            }
        }
        cout << ds[vtGiaNhat].ten;
        break;
    }
}

void timTreNhat(Nguoi ds[50], int N){
    for(int i = 0; i < N; i++){
        int vtTreNhat = i;
        for(int j = i+1; j < N; j++){
            if(nam[j] > nam[vtTreNhat]){
                vtTreNhat = j;
            }else if(nam[j] == nam[vtTreNhat]){
                if(thang[j] > thang[vtTreNhat]){
                    vtTreNhat = j;
                }else if(thang[j] == thang[vtTreNhat]){
                    if(ngay[i] > ngay[vtTreNhat]){
                        vtTreNhat = j;
                    }
                }
            }
        }
        cout << ds[vtTreNhat].ten << endl;
        break;
    }
}

int main(){
    int N;
    cin >> N >> ws;
    Nguoi ds[100];
    for(int  i = 0; i < N; i++){
        nhap(ds[i], i);
    }
    timTreNhat(ds, N);
    timGiaNhat(ds, N);
}