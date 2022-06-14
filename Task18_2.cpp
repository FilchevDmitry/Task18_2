#include <iostream>

int jamp(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return jamp(n - 1) + jamp(n - 2) + jamp(n - 3);
}
int main()
{
    int n = 3;
    std::cout << jamp(n);
}
