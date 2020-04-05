#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 10;
    int *y = &x;
    cout << y << endl;
    cout << *y << endl;
    return 0;
}