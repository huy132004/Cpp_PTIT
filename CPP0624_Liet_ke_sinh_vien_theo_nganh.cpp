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

bool kiemTraDungNganh(SinhVien ds, string nganhVietTat){
    if(ds.lop[0] == 'E') return false;
    if(nganhVietTat[0] == ds.maSV[5] && nganhVietTat[1] == ds.maSV[6]){
        return true;
    }
    return false;
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
    int T;
    cin >> T >> ws;
    while(T--){
        string nganh;
        getline(cin, nganh);
        for(int i = 0; i < nganh.length(); i++){
            nganh[i] = toupper(nganh[i]);
        }
        stringstream ss(nganh);
        string nganhVietTat;
        string word;
        while(ss >> word){
            nganhVietTat += word[0];
            if(nganhVietTat.length() == 2) break;
        }
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
        for(int i = 0; i < N; i++){
            if(kiemTraDungNganh(ds[i], nganhVietTat)){
                cout << ds[i];
            }
        }
    }
    return 0;
}