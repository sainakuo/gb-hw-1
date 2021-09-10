#include <iostream>

int main()
{
    extern int a, b, c, d;
    float res;

    res = a * (b + (static_cast<float>(c) / d));

    std::cout << res << std::endl;

    return 0;
}
