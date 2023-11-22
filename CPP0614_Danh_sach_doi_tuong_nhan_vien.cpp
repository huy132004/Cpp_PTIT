#include <bits/stdc++.h>
using namespace std;

int dem = 0;
class NhanVien{
public:
    int stt;
    string name, sex, birth, address, tax_code, sign_date;
    NhanVien(){
        name = sex = birth = address = tax_code = sign_date = "";
    }
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien);
};

istream& operator >> (istream& mycin, NhanVien& ds){
    ++dem;
    ds.stt = dem;
    cin.ignore();
    getline(mycin, ds.name);
    mycin >> ds.sex;
    mycin >> ds.birth;
    cin.ignore();
    getline(mycin, ds.address);
    mycin >> ds.tax_code;
    mycin >> ds.sign_date;
    return mycin;
}

ostream& operator << (ostream& mycout, NhanVien ds){
    mycout << setfill('0') << setw(5) << ds.stt << " ";
    mycout << ds.name << " " << ds.sex << " " << ds.birth << " " << ds.address << " " << ds.tax_code << " " << ds.sign_date << endl;
    return mycout;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}