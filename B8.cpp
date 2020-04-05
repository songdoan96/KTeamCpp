#include <iostream>
//#include <iomanip>	// for std::setprecision()
using namespace std;

int main()
{
    int n = 75;
    char c = 'K';

    cout << "Int to Char: " << static_cast<char>(n) << endl;

    cout << "Char to Int: " << static_cast<int>(c);

    return 0;
}