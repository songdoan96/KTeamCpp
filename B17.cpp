#include <iostream>
#include<cstdlib>
using namespace std;

void doSomeThing()
{
    int value{0};
    ++value;
    cout << value << endl;
}
void funcStatic()
{
    static int value{0};
    ++value;
    cout << value << endl;
}

int main()
{
    
    doSomeThing();
    doSomeThing();
    doSomeThing();

    cout << "========" << endl;
    funcStatic();
    funcStatic();
    funcStatic();
    return 0;
}