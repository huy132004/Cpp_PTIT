#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten;
    string lop;
    string ngaysinh;
    float gpa;
};


void nhap(SinhVien *ds, int N){
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].ngaysinh;
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[50], int N){
    for(int i = 0; i < N; i++){
        cout << "B20DCCN0";
        //In mã sinh viên
        cout << (i+1 < 10 ? "0" : "") << i+1 << " ";
        cout << ds[i].ten << " ";
        cout << ds[i].lop << " ";
        // Nếu ngày sinh chỉ có 1 chữ số
        if(ds[i].ngaysinh[1] == '/'){
            ds[i].ngaysinh = '0' + ds[i].ngaysinh;
        }
        // Nếu tháng sinh chỉ có 1 chữ số
        if(ds[i].ngaysinh[4] == '/'){
            ds[i].ngaysinh.insert(ds[i].ngaysinh.begin()+3, '0');
        }
        cout << ds[i].ngaysinh << " ";
        cout << setprecision(2) << fixed << ds[i].gpa;
        cout << endl; 
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}