#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    char HoTen[50];
    char GioiTinh[5];
    char NgaySinh[15];
    char DiaChi[100];
    char MSThue[15];
    char NgayKy[15];
};

void nhap(NhanVien &a){
    cin.get(a.HoTen, 50);
    cin >> a.GioiTinh;
    cin >> a.NgaySinh;
    cin.ignore();
    cin.get(a.DiaChi, 100);
    cin >> a.MSThue;
    cin >> a.NgayKy;
}
void in(NhanVien a){
    cout << "00001 ";
    cout << a.HoTen << " ";
    cout << a.NgaySinh << " ";
    cout << a.DiaChi << " ";
    cout << a.MSThue << " ";
    cout << a.NgayKy;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}