#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten;
    string lop;
    string ngaysinh;
    float gpa;
};


void nhap(SinhVien *ds, int N){
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].ngaysinh;
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[50], int N){
    for(int i = 0; i < N; i++){
        // In mã sinh viên
        cout << "B20DCCN0";
        cout << (i+1 < 10 ? "0" : "") << i+1 << " ";
        // In tên sinh viên
        stringstream ss(ds[i].ten);
        string word;
        while(ss >> word){
            cout << (char) toupper(word[0]);
            for(int i = 1; i < word.size(); i++){
                cout << (char) tolower(word[i]);
            }
            cout << " ";
        }
        // In lớp
        cout << ds[i].lop << " ";
        // In ngày sinh
        // Nếu ngày sinh chỉ có 1 chữ số
        if(ds[i].ngaysinh[1] == '/'){
            ds[i].ngaysinh = '0' + ds[i].ngaysinh;
        }
        // Nếu tháng sinh chỉ có 1 chữ số
        if(ds[i].ngaysinh[4] == '/'){
            ds[i].ngaysinh.insert(ds[i].ngaysinh.begin()+3, '0');
        }
        cout << ds[i].ngaysinh << " ";
        // In điểm
        cout << setprecision(2) << fixed << ds[i].gpa;
        cout << endl; 
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}