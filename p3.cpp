#include <iostream>
#include <math.h>
#define VALUE 600851475143LL
#define ll long long
// Largest Prime Factor

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int nextPrime(int n)
{
    while (true)
    {
        n = n + 1;
        if (isPrime(n))
            break;
    }
    return n;
}
int main()
{
    int num = 2;
    ll largestPrime = VALUE;
    while (num < largestPrime)
    {
        if (largestPrime % num == 0)
            largestPrime /= num;
        num = nextPrime(num);
    }
    std::cout << largestPrime;
    return 0;
}
