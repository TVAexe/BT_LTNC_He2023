/* Hãy định nghĩa một cấu trúc NhanVien gồm các thông tin sau:
Mã số nhân viên (MSNV);
Họ tên nhân viên;
Số ngày công trong tháng: số nguyên;
Bậc: số nguyên (nhận các giá trị từ 1 đến 5).
Hãy viết chương trình in ra họ tên của những nhân viên có lương tháng cao nhất.

(Lương tháng = Số ngày công x Bậc x 1.05)

Chương trình nhận đầu vào là số nguyên n
 n dòng tiếp theo, mỗi dòng chứa thông tin của một nhân viên bao gồm: MSNV, họ tên, số ngày công, bậc.
 Thông tin được ngăn cách với nhau bởi dấu phẩy.
*/
#include <bits/stdc++.h>
using namespace std;
int chuoi_to_so(string s)
{
    int result = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        result = result * 10 + (s[i] - '0');
    }
    return result;
}
string tao_ra(string s, int x, int y)
{
    string ta = "";
    for (int i = x; i < y; i++)
    {
        ta += s[i];
    }
    return ta;
}
struct NhanVien
{
    int ma_so;
    string ho_ten;
    int ngay_cong;
    int Bac_luong;
    void create(string s)
    {
        int n = (int)s.size();
        vector<int> danh_dau;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ',')
            {
                danh_dau.push_back(i);
            }
        }
        string temp = tao_ra(s, 0, danh_dau[0]);
        ma_so = chuoi_to_so(temp);
        temp = "";
        ho_ten = tao_ra(s, danh_dau[0] + 2, danh_dau[1]);
        temp = tao_ra(s, danh_dau[1] + 2, danh_dau[2]);
        ngay_cong = chuoi_to_so(temp);

        Bac_luong = (int)(s[(int)s.size() - 1] - '0');
    }
    int luong()
    {
        return ngay_cong * Bac_luong;
    }
};
void test(NhanVien list[], int n)
{
    vector<string> reward;
    vector<int> luong;
    for (int i = 0; i < n; i++)
    {
        luong.push_back(list[i].luong());
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < luong[i])
        {
            max = luong[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i].luong() == max)
            reward.push_back(list[i].ho_ten);
    }
    for (int i = 0; i < (int)reward.size(); i++)
    {
        cout << reward[i] << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    NhanVien list[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        list[i].create(s);
    }
    test(list, n);
}