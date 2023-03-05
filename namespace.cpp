#include <iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    // using namespace first;
    int x = 0;

    std::cout << x << "\n"
              << first::x << "\n"
              << second::x;

    return 0;
}