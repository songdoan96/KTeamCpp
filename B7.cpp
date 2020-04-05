#include <iostream>
#include <iomanip>
using namespace std;

// Lấy phần thập phân bao nhiêu số: setprecision

int main()
{
    cout << setprecision(20);
    double n = 1.345678910111241241;
    cout << n;
    return 0;
}