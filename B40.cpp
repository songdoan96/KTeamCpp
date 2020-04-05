#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 4, 8, 1, 6, 6};

    for (int i : arr)
        cout << i << " ";

    cout << endl;

    for (auto i : arr)
        cout << i << " ";

    cout << endl;

    for (const auto &i : arr)
        cout << i << " ";

    cout << endl;

    for (auto &&i : arr)
        cout << i << " ";

    return 0;
}