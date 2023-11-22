#include <bits/stdc++.h>
using namespace std;

vector<int> nam(50, 0), thang(50, 0), ngay(50, 0);
int maso = 0;

struct NhanVien{
    int maNV;
    string tenNV;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string msThue;
    string ngayKi;
};

void nhapDuLieuNgaySinh(string ngaySinh, int i){
    // Hàm substr lấy ra chuỗi cần lấy
    // Tham số đầu là vị trí cần lấy, tham số thứ hai là độ dài chuỗi cần lấy
    thang[i] = stoi(ngaySinh.substr(0,2));
    ngay[i] = stoi(ngaySinh.substr(3,2));
    nam[i] = stoi(ngaySinh.substr(6,4));
}

void nhap(NhanVien &ds) {
    ++maso;
    ds.maNV = maso;
    cin.ignore();
    getline(cin, ds.tenNV);
    cin >> ds.gioiTinh;
    cin >> ds.ngaySinh;
    nhapDuLieuNgaySinh(ds.ngaySinh, maso-1);
    cin.ignore();
    getline(cin, ds.diaChi);
    cin >> ds.msThue;
    cin >> ds.ngayKi;
}

bool soSanhNgaySinh(int j, int vtmin){
    if(nam[j] != nam[vtmin]) return nam[j] < nam[vtmin];
    if(thang[j] != thang[vtmin]) return thang[j] < thang[vtmin];
    return ngay[j] < ngay[vtmin];
}

void sapxep(NhanVien ds[50], int N){
    for(int i = 0; i < N; i++){
        int vtmin = i;
        for(int j = i+1; j < N; j++){
            if(soSanhNgaySinh(j, vtmin)){
                vtmin = j;
            }
        }
        swap(ds[i], ds[vtmin]);
    }
}

void inds(NhanVien ds[50], int N){
    for(int i = 0; i < N; i++){
        cout << setfill('0') << setw(5) << ds[i].maNV << " ";
        cout << ds[i].tenNV << " ";
        cout << ds[i].gioiTinh << " ";
        cout << ds[i].ngaySinh << " ";
        cout << ds[i].diaChi << " ";
        cout << ds[i].msThue << " ";
        cout << ds[i].ngayKi << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}