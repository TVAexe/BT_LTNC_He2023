#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class hoc_sinh
{
private:
    int tuoi;
    string ho;
    string ten;
    int rank;

public:
    void set_age(int a)
    {
        tuoi = a;
    }
    int get_age()
    {
        return tuoi;
    }
    void set_ho(string a)
    {
        ho = a;
    }
    string get_ho()
    {
        return ho;
    }
    void set_ten(string a)
    {
        ten = a;
    }
    string get_ten()
    {
        return ten;
    }
    void set_rank(int a)
    {
        rank = a;
    }
    int get_rank()
    {
        return rank;
    }
    void print()
    {
        cout << get_age() << "," << get_ho() << "," << get_ten() << ',' << get_rank();
    }
};

int main()
{
    hoc_sinh test;
    int tuoi;
    string ho;
    string ten;
    int rank;
    cin >> tuoi >> ho >> ten >> rank;
    test.set_age(tuoi);
    test.set_ho(ho);
    test.set_ten(ten);
    test.set_rank(rank);
    cout << test.get_age() << "\n";
    cout << test.get_ten() << ", " << test.get_ho() << "\n";
    cout << test.get_rank() << "\n";
    cout << "\n";
    test.print();
    return 0;
}
