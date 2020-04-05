#include <iostream>

using namespace std;

#define MAX 100

void nhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        unsigned char j;
        j = i;
        cout << "Phan tu thu " << j + 1 << ": ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        unsigned char j;
        j = i;
        cout << "Phan tu thu " << j + 1 << ": " << arr[i] << endl;
        // cout << "Phan tu thu" << arr[i] << " ";
    }
}

void saochep(int goc[], int sao[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sao[i] = goc[i];
    }
}

int main()
{

    int arr[MAX];
    int brr[MAX];
    int n;
    cout << "Nhap so luong phan tu n = ";
    cin >> n;

    nhapMang(arr, n);
    xuatMang(arr, n);
    saochep(arr, brr, n);

    cout << "Sao chep mang: " << endl;
    xuatMang(brr, n);

    return 0;
}