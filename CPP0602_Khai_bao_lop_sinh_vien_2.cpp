#include <bits/stdc++.h>
using namespace std;

class SinhVien{

private:
    string ten, lop, ngaySinh;
    float gpa;
public:
    SinhVien(){
        ten = lop = ngaySinh = "";
        gpa = 0;
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien); 
};

istream& operator >> (istream& mycin, SinhVien& a){
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ngaySinh;
    cin >> a.gpa;
    return mycin;
}

void bienDoiNgaySinh(string& ngaySinh){
    if(ngaySinh[2] != '/') ngaySinh.insert(0, "0");
    if(ngaySinh[5] != '/') ngaySinh.insert(3, "0");
}

ostream& operator << (ostream& mycout, SinhVien a){
    cout << "B22DCCN001 " << a.ten << " " << a.lop << " ";
    bienDoiNgaySinh(a.ngaySinh);
    cout << a.ngaySinh << " ";
    cout << setprecision(2) << fixed << a.gpa;
    return mycout;
}
#define a() a
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}