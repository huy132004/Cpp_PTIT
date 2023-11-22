#include <bits/stdc++.h>
using namespace std;

int dem = 0;

class NhanVien{
public:
    int stt, day, month, year;
    string name, sex, birth, address, tax_code, sign_date;
    NhanVien(){
        stt  = day = month = year = 0;
        name = sex = birth = address = tax_code = sign_date = "";
    }
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien);
};

void tachNgaySinh(NhanVien& ds){
    ds.month = stoi(ds.birth.substr(0, 2));
    ds.day = stoi(ds.birth.substr(3, 2));
    ds.year = stoi(ds.birth.substr(6, 4));
}

istream& operator >> (istream& mycin, NhanVien& ds){
    ds.stt = ++dem;
    mycin.ignore();
    getline(mycin, ds.name);
    mycin >> ds.sex >> ds.birth;
    tachNgaySinh(ds);
    mycin.ignore();
    getline(mycin, ds.address);
    mycin >> ds.tax_code >> ds.sign_date;
    return mycin;
}

bool cmp(NhanVien& a, NhanVien& b){
    if(a.year != b.year) return a.year < b.year;
    if(a.month != b.month) return a.month < b.month;
    if(a.day != b.day) return a.day < b.day;
    return false;
}

void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N, cmp);
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
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}