#include <bits/stdc++.h>
using namespace std;

multimap<float, int> sapxep_gpa;

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

void sapxep(SinhVien ds[50], int N){
    for(int i = 0; i < N; i++){
        sapxep_gpa.insert(pair<float, int>(ds[i].gpa, i));
    }
}

void in(SinhVien ds[50], int N){
    for(auto it = sapxep_gpa.rbegin(); it != sapxep_gpa.rend(); it++){
        // In mã sinh viên
        cout << "B20DCCN0";
        cout << (it->second+1 < 10 ? "0" : "") << it->second+1 << " ";
        // In tên sinh viên
        stringstream ss(ds[it->second].ten);
        string word;
        while(ss >> word){
            cout << (char) toupper(word[0]);
            for(int i = 1; i < word.size(); i++){
                cout << (char) tolower(word[i]);
            }
            cout << " ";
        }
        // In tên lớp
        cout << ds[it->second].lop << " ";
        // In ngày sinh
        // Nếu ngày sinh chỉ có 1 chữ số
        if(ds[it->second].ngaysinh[1] == '/'){
            ds[it->second].ngaysinh = '0' + ds[it->second].ngaysinh;
        }
        // Nếu tháng sinh chỉ có 1 chữ số
        if(ds[it->second].ngaysinh[4] == '/'){
            ds[it->second].ngaysinh.insert(ds[it->second].ngaysinh.begin()+3, '0');
        }
        cout << ds[it->second].ngaysinh << " ";
        // In điểm
        cout << setprecision(2) << fixed << ds[it->second].gpa;
        cout << endl; 
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}