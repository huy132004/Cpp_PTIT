#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    char Ten[50];
    char Lop[15];
    char NgaySinh[15];
    double Diem;

    void nhap()
    {
        cin.get(a.Ten, 50);
        cin >> a.Lop;
        cin >> a.NgaySinh;
        cin >> a.Diem;
    }

    void xuat()
    {
        cout << "B20DCCN001 " << a.Ten << " " << a.Lop << " ";

        // In ngày sinh
        string ngaysinh = a.NgaySinh;
        if (a.NgaySinh[1] == '/') // Nếu ngày sinh chỉ có 1 chữ số ví du 1/.../2004
        {
            if (a.NgaySinh[3] == '/') // Nếu tháng sinh chỉ có 1 chữ số ví dụ 1/3/2004
            {
                string::iterator it = ngaysinh.begin() + 2;
                ngaysinh.insert(it, '0'); // Thì chèn số 0 trước tháng sinh
            }
            ngaysinh = '0' + ngaysinh; // Chèn số 0 ra đầu trước ngày sinh
        }
        if (a.NgaySinh[2] == '/') // Nếu ngày sinh có 2 chữ số ví dụ 12/.../2004
        {
            if (a.NgaySinh[4] == '/') // Nếu tháng sinh chỉ có 1 chữ số ví dụ 12/8/2004
            {
                string::iterator it = ngaysinh.begin() + 3;
                ngaysinh.insert(it, '0'); // Thì chèn số 0 trước tháng sinh
            }
        }
        cout << ngaysinh << " ";

        cout << fixed << setprecision(2) << a.Diem;
    }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}