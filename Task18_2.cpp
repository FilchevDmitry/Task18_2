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
    int n =0;
    std::cout << "Enter the number of steps : ";
    std::cin >> n;
    std::cout << jamp(n);
}
