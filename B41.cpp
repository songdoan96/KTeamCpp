#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
#define MAX 10

void xuatMang(const array<int, MAX> &arr)
{
	for (const auto &i : arr)
	{
		cout << i << " ";
	}
}

int main()
{
	array<int, 5> arr1 = {1, 2, 3, 4, 5};

	arr1.at(2) = 7; //truy cap phan tu thu 2

	cout << "Xuat mang: ";
	for (const auto &i : arr1)
	{
		cout << i << " ";
	}

	cout << "\nKich thuoc mang: " << arr1.size() << endl;

	//Ham xuat mang

	array<int, MAX> arr2 = {1, 44, 315, 6342, 5251, 51512, 512, 9};
	xuatMang(arr2);

	//sap xep mang
	cout << "\nSap xep tang: ";
	sort(arr2.begin(), arr2.end());
	xuatMang(arr2);

	cout << "\nSap xep giam: ";
	sort(arr2.rbegin(), arr2.rend());
	xuatMang(arr2);

	return 0;
}