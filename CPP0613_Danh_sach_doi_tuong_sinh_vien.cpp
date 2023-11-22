#include <bits/stdc++.h>
using namespace std;

int dem = 0;

string chuanHoaTen(string& name){
    string name_out;
    stringstream ss_name(name);
    string word;
    while(ss_name >> word){
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        name_out += word + " ";
    }
    name_out.pop_back();
    return name_out;
}

void chuanHoaNgaySinh(string& ngaySinh){
    if(ngaySinh[2] != '/') ngaySinh.insert(0, "0");
    if(ngaySinh[5] != '/') ngaySinh.insert(3, "0");
}

class SinhVien{
public:
    int stt;
    string ten, lop, ngaySinh;
    float gpa;
    SinhVien(){
        ten = lop = ngaySinh = "";
        gpa = 0;
    }
    friend istream &operator >> (istream&, SinhVien&);
    friend ostream &operator << (ostream&, SinhVien);
};

istream &operator >> (istream& mycin, SinhVien& ds){
    ++dem;
    ds.stt = dem;
    mycin.ignore();
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    getline(mycin, ds.ngaySinh);
    mycin >> ds.gpa;
    return mycin;
}

ostream &operator << (ostream& mycout, SinhVien ds){
    mycout << "B20DCCN" << setfill('0') << setw(3) << ds.stt << " ";
    ds.ten = chuanHoaTen(ds.ten);
    chuanHoaNgaySinh(ds.ngaySinh);
    mycout << ds.ten << " " << ds.lop << " " << ds.ngaySinh << " ";
    mycout << setprecision(2) << fixed << ds.gpa << endl; 
    return mycout;
}

bool cmp(const SinhVien& a, const SinhVien& b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[50], int N){
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(int i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}