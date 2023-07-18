#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student
{
public:
    int diem_thanh_phan[5];
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> diem_thanh_phan[i];
        }
    }
    int dich()
    {
        int tong = 0;
        for (int i = 0; i < 5; i++)
        {
            tong += diem_thanh_phan[i];
        }
        return tong;
    }
};

int main()
{
    int so_hoc_sinh = 0;
    cin >> so_hoc_sinh;
    Student test;
    test.input();
    int moc_diem = test.dich();
    int so_doi_thu = 0;
    for (int i = 1; i < so_hoc_sinh; i++)
    {
        Student ung_vien;
        ung_vien.input();
        if (ung_vien.dich() > moc_diem)
        {
            so_doi_thu++;
        }
    }
    cout << so_doi_thu;
}
