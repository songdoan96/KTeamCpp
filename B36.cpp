#include <iostream>
using namespace std;

#define ROW 100
#define COL 100

void nhapMang2Chieu(int arr[][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "]" << "[" << j << "]= ";
            cin >> arr[i][j];
        }
    }
}
void xuatMang2Chieu(int arr[][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "]" << "[" << j << "]= " << arr[i][j]<<" ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[ROW][COL];
    int nRow, nCol;
    cout << "Nhap hang: ";
    cin >> nRow;

    cout << "Nhap cot: ";
    cin >> nCol;

    nhapMang2Chieu(arr, nRow, nCol);
    xuatMang2Chieu(arr, nRow, nCol);
    return 0;
}