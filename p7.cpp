#include <iostream>
#include <math.h>

// 10001st Prime

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int count = 1;
    int num = 3;
    while (1)
    {
        if (isPrime(num))
            count++;
        if (count == 10001)
            break;
        num++;
    }
    std::cout << num;
    return 0;
}