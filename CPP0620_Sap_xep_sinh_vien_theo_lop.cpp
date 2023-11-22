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

bool cmp(const SinhVien& a, const SinhVien& b){
    if(a.lop != b.lop) return a.lop < b.lop;
    else return a.maSV < b.maSV;
}

void sapXepTheoLop(SinhVien ds[1000], int N){
    sort(ds, ds + N, cmp);
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
    sapXepTheoLop(ds, N);
    for(int i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}