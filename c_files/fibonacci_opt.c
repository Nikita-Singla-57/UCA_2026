#include <stdio.h>

long long sumEvenFibonacci(long long n)
{
    if (n < 2)
        return 0;

    long long sum = 0;

    long long a = 2;   
    long long b = 8;   

    while (a <= n)
    {
        sum += a;

        long long c = 4 * b + a;

        a = b;
        b = c;
    }

    return sum;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%lld\n", sumEvenFibonacci(n));

    return 0;
}
