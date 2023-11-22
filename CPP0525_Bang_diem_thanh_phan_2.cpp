#include <bits/stdc++.h>
using namespace std;

class SinhVien{
public:
    string maSV, ten, lop;
    float d1, d2, d3;
    SinhVien(){
        maSV = ten = lop = "";
        d1 = d2 = d3 = 0;
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& mycin, SinhVien& ds){
    cin.ignore();
    getline(mycin, ds.maSV);
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    cin >> ds.d1 >> ds.d2 >> ds.d3;
    return mycin;
}

ostream& operator << (ostream& mycout, SinhVien ds){
    mycout << ds.maSV << " " << ds.ten << " " << ds.lop << " ";
    mycout << setprecision(1) << fixed << ds.d1 << " " << ds.d2 << " " << ds.d3 << endl;
    return mycout;
}


bool cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

int main(){
    int N;
    cin >> N;
    SinhVien ds[100];
    for(int i = 0; i < N; i++){
        cin >> ds[i];
    }
    sort(ds, ds + N, cmp);
    for(int i = 0; i < N; i++){
        cout << i+1 << " " << ds[i];
    }
}