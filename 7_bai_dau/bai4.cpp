// Hãy viết hàm outputPrime(int *a, int n) để in ra tất cả các số nguyên tố có trong mảng a theo đúng thứ tự xuất hiện trong mảng,
// trong đó a là mảng chứa các số nguyên, n là số lượng số có trong mảng (n <= 10000).
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    else
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    return true;
}
void outputPrime(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (prime(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
}
