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
    return name_out;
}

void chuanHoaNgaySinh(string& ngaySinh){
    if(ngaySinh[2] != '/') ngaySinh.insert(0, "0");
    if(ngaySinh[5] != '/') ngaySinh.insert(3, "0");
}

class SinhVien{
    private:
        string ten, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            ten = lop = ngaySinh = "";
            gpa = 0;
        }
    friend istream &operator >> (istream&, SinhVien&);
    friend ostream &operator << (ostream&, SinhVien);
};

istream &operator >> (istream& mycin, SinhVien &ds){
    mycin.ignore();
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    getline(mycin, ds.ngaySinh);
    mycin >> ds.gpa;
    return mycin;
}

ostream &operator << (ostream& mycout, SinhVien ds){
    ++dem;
    mycout << "B20DCCN" << setfill('0') << setw(3) << dem << " ";
    ds.ten = chuanHoaTen(ds.ten);
    chuanHoaNgaySinh(ds.ngaySinh);
    mycout << ds.ten << " " << ds.lop << " " << ds.ngaySinh << " ";
    mycout << setprecision(2) << fixed << ds.gpa << endl; 
    return mycout;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}