#include <iostream>
using namespace std;

int main()
{
    char charArr[] = "Doan Quang Song";
    cout << charArr << endl;

    char charBrr[20];
    cout << "Nhap ten cua ban: ";
    cin.getline(charBrr, 20);
    cout << "tenban: " << charBrr;
    return 0;
}
