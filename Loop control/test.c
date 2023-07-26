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


/* BC82 乘法表 */
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}


/* BC83 牛牛学数列 */
#include <stdio.h>

int main() {
    int n = 0;
    int falg = 1;
    int sum = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += falg * i;
        falg *= -1;
    }
    printf("%d", sum);

    return 0;
}


/* BC84 牛牛学数列2 */
#include <stdio.h>

int main() {
    int n = 0;
    double sum = 0.0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / i);
    }
    printf("%.6lf", sum);
    return 0;
}


/* BC85 牛牛学数列3 */
#include <stdio.h>

int main() {
    int n = 0;
    int flag = 1;
    double sum = 0.0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (flag * i);
        flag *= -1;
    }
    printf("%.3lf", sum);

    return 0;
}
//对题目进行一波仔细分析后可发现
//   n: 1  2 3  4 5  6 7  8 9
//分母: 1 -2 3 -4 5 -6 7 -8 9


/* BC86 牛牛学数列4 */
#include <stdio.h>

int main() {
    int sum = 0;
    int cur = 0;
    int n = 0;

    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        cur += i;
        sum += cur;
    }
    printf("%d", sum);
    return 0;
}


/* BC87 数位之和 */
#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;

    scanf("%d", &n);
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}


/* BC88 魔法数字变换 */
#include <stdio.h>

int main() {
    int n = 0;
    int count = 1;

    scanf("%d", &n);//输入
    while (1)
    {
        n = (n % 2) ? n * 3 + 1 : n / 2;

        if (n == 1)
            break;

        count++;
    }
    printf("%d\n", count);
    return 0;
}


/* BC89 包含数字9的数 */
#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 2019; i++)
    {
        int tmp = i;
        while (tmp > 0)//遍历i的每一位判断是否存在数字9
        {
            if (tmp % 10 == 9)
            {
                count++;
                break;
            }
            else {
                tmp /= 10;
            }
        }
    }
    printf("%d", count);
    return 0;
}


/* BC90 小乐乐算多少人被请家长 */
#include <stdio.h>

int main() {
    int n = 0;
    int CN = 0, math = 0, EN = 0;
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &CN, &math, &EN);
        int average = (CN + math + EN) / 3;
        if (average < 60)
            count++;
    }
    printf("%d", count);

    return 0;
}


/* BC91 水仙花数 */
#include <stdio.h>

int IsNarcissistic(int num)
{
    int a = (num % 10);
    int b = (num / 10) % 10;
    int c = num / 100;
    return a * a * a + b * b * b + c * c * c == num;
}

int main() {
    int m = 0, n = 0;
    int flag = 0;
    while (~scanf("%d %d", &m, &n))
    {
        for (int i = m; i < n; i++)
        {
            if (IsNarcissistic(i))
            {
                printf("%d ", i);
                flag = 1;
            }
        }
        if (!flag)
            printf("no\n");
    }
    return 0;
}


/* BC92 变种水仙花 */
#include <stdio.h>

int main() {
    for (int i = 10000; i < 100000; i++)
    {
        int sum = 0;
        for (int j = 10; j <= 10000; j *= 10)
        {
            sum += (i / j) * (i % j);
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
//655 = 6 * 55 + 65 * 5
//num = (num/100) * (num%100) + (num/10)*(num%10)
//num = (num/1000) * (num%1000) + (num/100)*(num%100) + (num/10)*(num%10)
//num = (num/10000) * (num%10000) + (num/1000) * (num%1000) + (num/100)*(num%100) + (num/10)*(num%10)


/* BC93 公务员面试 */
#include <stdio.h>

int main() {
    int score = 0;
    int max = -1;       //保证取到最大值
    int min = 120;      //保证取到最小值
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &score);
        max = max < score ? score : max;
        min = min > score ? score : min;
        sum += score;
    }
    printf("%.2f\n", (sum - min - max) / 5.0);
    return 0;
}


/* BC94 反向输出一个四位数 */
#include <stdio.h>

int main() {
    int n = 0;

    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}


/* BC95 小乐乐与进制转换 */
#include <stdio.h>
void senary(int n)
{
    if (n > 5)
        senary(n / 6);

    printf("%d", n % 6);
}

int main() {
    long long n = 0;
    scanf("%lld", &n);
    senary(n);

    return 0;
}


/* BC96 [NOIP2015]金币 */
#include <stdio.h>
#define SUM_DAYS(x) ((x)*(x+1)/2) 

int main() {
    int days = 0;
    int sum = 0;
    int gold_coin = 1;
    int cur_days = 0;

    scanf("%d", &days);
    while (cur_days < days)
    {
        cur_days += gold_coin;
        sum += gold_coin * gold_coin;
        gold_coin++;
    }
    //循环结束之后的金币总数 > 输入天数可获得的金币总数
    sum -= (gold_coin - 1) * (cur_days - days);
    printf("%d", sum);
    return 0;
}


/* BC97 回文对称数 */
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    //不是回文数
    if ((x < 0) || (x % 10 == 0 && x != 0))
        return false;

    int reverseNumber = 0;
    //是回文数
    while (x > reverseNumber)
    {
        reverseNumber = reverseNumber * 10 + x % 10;
        x /= 10;
    }
    return (x == reverseNumber / 10) || (x == reverseNumber);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (isPalindrome(i))
            printf("%d\n", i);
    }
    return 0;
}