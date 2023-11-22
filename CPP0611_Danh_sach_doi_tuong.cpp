#include <bits/stdc++.h>
using namespace std;

int coun = 0;
class SinhVien{
    private:
        string ten, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            ten = lop = ngaySinh = "";
            gpa = 0.0;
        }
    friend istream& operator >>(istream&, SinhVien&);
    friend ostream& operator <<(ostream&, SinhVien);
};

istream& operator >>(istream& mycin, SinhVien &ds) {
    cin.ignore();
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    getline(mycin, ds.ngaySinh);
    mycin >> ds.gpa;
    return mycin;
}

ostream& operator <<(ostream& mycout, SinhVien ds){
    ++coun;
    mycout << "B20DCCN" << setfill('0') << setw(3) << coun << " ";
    if(ds.ngaySinh[1] == '/') ds.ngaySinh.insert(0, "0");
    if(ds.ngaySinh[4] == '/') ds.ngaySinh.insert(3, "0");
    mycout << ds.ten << " " << ds.lop << " " << ds.ngaySinh << " ";
    mycout << setprecision(2) << fixed << ds.gpa << endl; 
    return mycout;
}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}