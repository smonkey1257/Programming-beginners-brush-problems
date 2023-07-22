#define _CRT_SECURE_NO_WARNINGS 1


/* BC78 KiKi说祝福语 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        printf("Happy new year!Good luck!\n");
    }
    return 0;
}


/* BC79 小乐乐求和 */
#include <stdio.h>

int main() {
    long long n = 0;
    long long sum = 0;

    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}


/* BC80 奇偶统计 */
#include <stdio.h>

int main() {
    int n = 0;
    int count_Odd = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            count_Odd++;
    }

    printf("%d %d", count_Odd, n - count_Odd);
    return 0;
}


/* BC81 KiKi求质数个数 */
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        if (!(n % i))
            return 0;
    }
    return 1;
}

int main() {
    int count = 0;
    for (int i = 100; i < 1000; i++)
    {
        if (isPrime(i))
            count++;
    }
    printf("%d", count);
    return 0;
}


