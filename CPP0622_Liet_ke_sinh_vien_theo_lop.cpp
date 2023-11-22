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
    getline(cin, ds.maSV);
    getline(cin, ds.ten);
    getline(cin, ds.lop);
    getline(cin, ds.email);
    return mycin;
}

ostream& operator << (ostream& mycout, SinhVien ds){
    mycout << ds.maSV << " " << ds.ten << " " << ds.lop << " " << ds.email << endl;
    return mycout;
}

int main(){
    SinhVien ds[1000];
    int N;
    cin >> N >> ws;
    for(int i = 0; i < N; i++){
        cin >> ds[i];
    }
    int Q;
    cin >> Q;
    while(Q--){
        string ten_lop;
        cin >> ten_lop;
        cout << "DANH SACH SINH VIEN LOP " << ten_lop << ":" << endl;
        for(int i = 0; i < N; i++){
            if(ds[i].lop == ten_lop){
                cout << ds[i];
            }
        }
    }
}