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
    friend void chuanHoa(SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& mycin, SinhVien& a){
    getline(mycin, a.ten);
    mycin >> a.lop >> a.ngaySinh >> a.gpa;
    return mycin;
}

ostream& operator << (ostream& mycout, SinhVien a){
    cout << "B20DCCN001 ";
    // Chuẩn hóa tên
    a.ten[0] = toupper(a.ten[0]);
    int len = a.ten.length();
    for(int i = 1; i < len; i++){
        if(a.ten[i-1] == ' '){
            a.ten[i] = toupper(a.ten[i]);
        } else {
            a.ten[i] = tolower(a.ten[i]);
        }
    }
    cout << a.ten << " ";
    cout << a.lop << " ";
    // Chuẩn hóa ngày sinh
    if(a.ngaySinh[2] != '/') a.ngaySinh.insert(0, "0");
    if(a.ngaySinh[5] != '/') a.ngaySinh.insert(3, "0");
    cout << a.ngaySinh << " ";
    cout << setprecision(2) << fixed << a.gpa;
    return mycout;
}

#define a() a

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}