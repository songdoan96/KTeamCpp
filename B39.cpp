#include <iostream>

auto sum(int a, int b)
{
    return a + b;
}

int main()
{
    auto x = sum(4, 5);
    std::cout << x;
    return 0;
}