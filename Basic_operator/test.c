#define _CRT_SECURE_NO_WARNINGS 1

/* BC21 ţţѧ�ӷ� */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}


/* BC22 ţţѧ���� */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a / b);
    return 0;
}


/* BC23 ţţѧȡ�� */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a % b);
    return 0;
}


/* BC24 �������ĸ�λ���� */
#include <stdio.h>

int main() {
    float a = 0.0f;
    scanf("%f", &a);
    printf("%d", ((int)a) % 10);
    return 0;
}


/* BC25 ţţ���ӰƱ */
#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);
    printf("%d00", x);
    return 0;
}
//����ƫ�棬���ŵ����ڿ��Ա�ʾ���������


/* BC26 ���������� */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;
}


/* BC27 �����ĸ�λ */
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    printf("%d", num % 10);
    return 0;
}


/* BC28 ������ʮλ */
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    printf("%d", (num / 10) % 10);
    return 0;
}


/* BC29 ��ѧ�� */
#include <stdio.h>

int main() {
    int week = 0, day = 0;
    scanf("%d %d", &week, &day);
    printf("%d", (week + day - 1) % 7 + 1);//������������Ϊ0
    return 0;
}


/* BC30 ʱ��ת�� */
#include <stdio.h>

int main() {
    int seconds = 0;
    scanf("%d", &seconds);
    printf("%d %d %d", (seconds / 3600), (seconds % 3600) / 60, (seconds % 60));
    return 0;
}


/* BC31 2��n�η����� */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", (1 << n));
    return 0;
}


/* BC32 ���ܻ������ */
#include <stdio.h>

int main() {
    int age = 0;
    scanf("%d", &age);
    printf("%d0000", age * 3156);
    return 0;
}


/* BC33 ͳ�Ƴɼ� */
#include <stdio.h>

int main() {
    float ave = 0.0f, max = 0.0f, min = 0.0f;
    int n = 0;
    float tmp = 0.0f;

    //����
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &tmp);
        if (i == 0)
        {
            min = max = tmp;
        }
        else
        {
            if (tmp > max)
                max = tmp;
            else if (tmp < min)
                min = tmp;
        }
        ave += tmp;
    }

    //������ֵ����Сֵ��ƽ��ֵ
    printf("%.2f %.2f %.2f\n", max, min, ave /= n);
    return 0;
}


/* BC34 ���������ε��ܳ������ */
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.0f, b = 0.0f, c = 0.0f;
    float C = 0.0f, S = 0.0f, p = 0.0f;

    scanf("%f %f %f", &a, &b, &c);
    C = (a + b + c);
    p = C / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));//���׹�ʽ
    printf("circumference=%.2f area=%.2f\n", C, S);

    return 0;
}


/* BC35 KiKi������ */
#include <stdio.h>

int main() {
    int n = 0, h = 0, m = 0;
    while (~scanf("%d %d %d", &n, &h, &m))
    {
        printf("%d\n", ((n * h) - m) / h);
    }
    return 0;
}


/* BC36 �¶�ת�� */
#include <stdio.h>

int main() {
    float f = 0.0f;
    scanf("%f", &f);
    printf("%.3f", (5.0 / 9.0) * (f - 32));
    return 0;
}
