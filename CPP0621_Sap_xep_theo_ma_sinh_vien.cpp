#include <bits/stdc++.h>
using namespace std;

class SinhVien{
private:
    string ten, lop, email;
public:
    string maSV;
    SinhVien(){
        maSV = ten = lop = email = "";
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& mycin, SinhVien& ds){
    getline(mycin, ds.maSV);
    getline(mycin, ds.ten);
    getline(mycin, ds.lop);
    getline(mycin, ds.email);
    return mycin;
}

bool cmp(SinhVien a, SinhVien b){
    return a.maSV < b.maSV;
}

ostream& operator << (ostream& mycout, SinhVien ds){
    mycout << ds.maSV << " " << ds.ten << " " << ds.lop << " " << ds.email << endl;
    return mycout;
}

int main() {
	vector<SinhVien> ds;
	SinhVien tmp;
	while (cin >> tmp) {
		ds.push_back(tmp);
	}
	sort(ds.begin(), ds.end(), cmp);
	for (int i = 0; i < ds.size(); i++){
        cout << ds[i];
    } 
}