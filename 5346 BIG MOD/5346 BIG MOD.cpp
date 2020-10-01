#include <iostream>
#include<cmath>

int main()
{
    long unsigned int B = 0;
    long unsigned int P = 0;
    long unsigned int M = 0;
    std::cin >> B;
    std::cin >> P;
    std::cin >> M;
    long unsigned int result = B;
    for (int i = 1; i < P; i++)
    {
        result *= B;
    }
    result %= M;
    std::cout << result;
}