#include <iostream>
#define LIMIT 4e6

// Even Fibonacci Numbers

int main()
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int sum = 0;
    while (fn < LIMIT)
    {
        sum += fn % 2 ? 0 : fn;
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
    std::cout << sum;
    return 0;
}