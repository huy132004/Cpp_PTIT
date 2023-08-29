#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien
{
    char HoTen[50];
    char GioiTinh[5];
    char NgaySinh[15];
    char DiaChi[100];
    char MSThue[15];
    char NgayKy[15];
};

void nhap(NhanVien &nv)
{
    cin.ignore();
    cin.get(nv.HoTen, 50);
    cin >> nv.GioiTinh;
    cin >> nv.NgaySinh;
    cin.ignore();
    cin.get(nv.DiaChi, 100);
    cin >> nv.MSThue;
    cin >> nv.NgayKy;
}
void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {   
        //Hàm setfill và setw để lấp đầy số, ví dụ 1 thành 00001, 14 thành 00014
        cout << setfill('0') << setw(5) << i + 1 << " ";
        cout << ds[i].HoTen << " ";
        cout << ds[i].GioiTinh << " ";
        cout << ds[i].NgaySinh << " ";
        cout << ds[i].DiaChi << " ";
        cout << ds[i].MSThue << " ";
        cout << ds[i].NgayKy << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}