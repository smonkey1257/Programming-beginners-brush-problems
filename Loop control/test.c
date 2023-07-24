#define _CRT_SECURE_NO_WARNINGS 1


/* BC78 KiKi˵ף���� */
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


/* BC79 С������� */
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


/* BC80 ��żͳ�� */
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


/* BC81 KiKi���������� */
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


/* BC82 �˷��� */
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


/* BC83 ţţѧ���� */
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


/* BC84 ţţѧ����2 */
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


/* BC85 ţţѧ����3 */
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
//����Ŀ����һ����ϸ������ɷ���
//   n: 1  2 3  4 5  6 7  8 9
//��ĸ: 1 -2 3 -4 5 -6 7 -8 9


/* BC86 ţţѧ����4 */
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


/* BC87 ��λ֮�� */
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


/* BC88 ħ�����ֱ任 */
#include <stdio.h>

int main() {
    int n = 0;
    int count = 1;

    scanf("%d", &n);//����
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


/* BC89 ��������9���� */
#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 2019; i++)
    {
        int tmp = i;
        while (tmp > 0)//����i��ÿһλ�ж��Ƿ��������9
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