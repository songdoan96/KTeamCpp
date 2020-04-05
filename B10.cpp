#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned char x, y;
    unsigned char i{100};
    float j{12.4124};
    cout << "Nhap x,y: ";
    cin >> x >> y;
    cout << "x: " << x << ", y: " << y << endl;

    cout << "=== Dinh dang du lieu ===" << endl;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "n->Oct phan: " << oct << n << endl;
    cout << "n->Hex phan: " << hex << n << endl;
    return 0;
}
