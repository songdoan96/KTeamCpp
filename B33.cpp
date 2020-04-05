#include <iostream>
#include <string>

#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x;
    cout << "Nhap so luong phan tu: ";
    cin >> x;
    int arr[x - 1];
    int brr[x - 1];

    for (int i = 0; i < x; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\nRandom mot mang: " << endl;

    srand(time(NULL));

    for (int i = x - 1; i >= 0; i--)
    {
        brr[i] = rand() % 101;
    }
    for (int i = x - 1; i >= 0; i--)
    {
        cout << brr[i] << ", ";
    }
    return 0;
}