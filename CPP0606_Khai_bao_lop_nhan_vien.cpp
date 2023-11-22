#include <bits/stdc++.h>
using namespace std;

class NhanVien{
private:
    string name, sex, birth, address, tax_code, sign_date;
public:
    NhanVien() {
        name = sex = birth = address = tax_code = sign_date = "";
    }
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien);
};

istream& operator >> (istream& mycin, NhanVien& a){
    getline(mycin, a.name);
    getline(mycin, a.sex);
    getline(mycin, a.birth);
    getline(mycin, a.address);
    getline(mycin, a.tax_code);
    getline(mycin, a.sign_date);
    return mycin;
}

ostream& operator << (ostream& mycout, NhanVien a){
    mycout << "00001 " << a.name << " " << a.sex << " " << a.birth << " ";
    mycout << a.address << " " << a.tax_code << " " << a.sign_date;
    return mycout;
}

#define a() a

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}