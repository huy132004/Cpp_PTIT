#include <bits/stdc++.h>
using namespace std;

int dem = 0;

class SinhVien{
public:
    int stt;
    string ten, lop, ngay_sinh;
    float gpa;
    SinhVien(){
        stt = 0;
        ten = lop = ngay_sinh = "";
        gpa = 0;
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& mycin, SinhVien& ds){
    ++dem;
    ds.stt = dem;
    scanf("\n");
    getline(mycin, ds.ten);
    mycin >> ds.lop;
    mycin >> ds.ngay_sinh;
    mycin >> ds.gpa;
    return mycin;
}

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, cmp);
}

void chuanHoaTen(string& ten){
    stringstream ss(ten);
    ten = "";
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        ten += word + ' ';
    }  
    ten.pop_back();
}

void chuanHoaNgaySinh(string& ngay_sinh){
    if(ngay_sinh[2] != '/') ngay_sinh.insert(0, "0");
    if(ngay_sinh[5] != '/') ngay_sinh.insert(3, "0");
}

ostream& operator << (ostream& mycout, SinhVien ds){
    mycout << "B20DCCN0" << setfill('0') << setw(2) << ds.stt << " ";
    chuanHoaTen(ds.ten);
    mycout << ds.ten << " ";
    mycout << ds.lop << " ";
    chuanHoaNgaySinh(ds.ngay_sinh);
    mycout << ds.ngay_sinh << " ";
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
    sapxep(ds, N);
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}