#include <iostream>
//C1
#include <cstdlib>
#include <ctime>

//C2 random 1 so lon, loi khi dung vscode
#include <random>

using namespace std;

int main1()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        cout << rand() % (100 - 20 + 1) + 20 << " "; //random so tu 20 toi 100
    }
    return 0;
}
int main()
{
    random_device rd;
    mt19937 rng(rd());
    for (int i = 0; i < 10; i++)
    {
        cout << rng() << ", ";
    }

    cout << "\n=== Tu 1 - 100 ====" << endl;
    uniform_int_distribution<int> uni(1, 10);
    for (int i = 0; i < 100; i++)
    {
        cout << uni(rng) << ", ";
    }
}