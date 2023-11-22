#include <bits/stdc++.h>
using namespace std;

class SinhVien{
public:
    string maSV, ten, lop, email;
    SinhVien(){
        maSV = ten = lop = email = "";
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& mycin, SinhVien& ds){
    getline(mycin, ds.maSV);
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    getline(mycin, ds.email);
    return mycin;
}

ostream& operator << (ostream& mycout, SinhVien ds){
    mycout << ds.maSV << " " << ds.ten << " " << ds.lop << " " << ds.email << endl;
    return mycout;
}

#define a() a
int main(){
    SinhVien ds[1000];
    int N;
    cin >> N >> ws;
    for(int i = 0; i < N; i++){
        cin >> ds[i];
    }
    int T;
    cin >> T;
    while(T--){
        string nam;
        cin >> nam;
        cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
        for(int i = 0; i < N; i++){
            if(nam[2] == ds[i].lop[1] && nam[3] == ds[i].lop[2]){
                cout << ds[i];
            }
        }
    }
    return 0;
}