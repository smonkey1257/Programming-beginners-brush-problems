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


/* BC37 ţţ��Բ */
#include <stdio.h>

int main() {
    float r = 0.0f, pi = 3.14;
    scanf("%f", &r);
    printf("%.2f", pi * r * r);
    return 0;
}


/* BC38 ţţ�Ĳ�����· */
#include <stdio.h>

int main() {
    float r1 = 0.0f, r2 = 0.0f;
    scanf("%f %f", &r1, &r2);
    printf("%.1f", 1.0 / ((1.0 / r1) + (1.0 / r2)));
    return 0;
}


/* BC39 ţţ��ˮ�� */
#include <stdio.h>

int main() {
    int height = 0, radius = 0;
    scanf("%d %d", &height, &radius);
    float V = (3.14 * height * radius * radius) / 1000;
    int caps = 10 / V;
    (10 / V) == caps ? printf("%.d", caps) : printf("%d", caps + 1);
    return 0;
}
//�жϸ��������������������������Ƿ���ͬ�������жϱ����Ƿ���ͬ



/* BC40 ţţ�ĵȲ����� */
#include <stdio.h>

int main() {
    int a1 = 0, a2 = 0;
    int a3 = 0;
    scanf("%d %d", &a1, &a2);
    printf("%d\n", (a2 - a1) + a2);
    return 0;
}


/* BC41 ţţ���� */
#include <stdio.h>

int main() {
    float pi = 3.14f;
    int r = 0;
    scanf("%d", &r);
    printf("%.2f", (4.0 / 3.0) * 3.14 * r * r * r);
    return 0;
}


/* BC42 С���ֶ����� */
#include <stdio.h>

int main() {
    //ֻ����Сʱ�ͷ���
    long long hour = 0, minute = 0, k = 0;
    scanf("%lld:%lld %lld", &hour, &minute, &k);
    hour = ((minute + k) / 60 + hour) % 24;
    minute = (minute + k) % 60;
    printf("%02lld:%02lld\n", hour, minute);
    return 0;
}


/* BC44 С������ŷ����� */
#include <stdio.h>

int main() {
    long long m = 0, n = 0, r = 0;
    scanf("%lld %lld", &m, &n);
    long long p = m * n;//�����Ա�����С������
    while (n)//��n = 0ʱ�˳�ѭ����m�����Լ��
    {
        r = m % n;
        m = n;
        n = r;
    }
    printf("%lld", m + (p / m));
    return 0;
}


/* BC43 С�����ŵ��� */
#include <stdio.h>

int main() {
    int minute = 0, people = 0;
    scanf("%d", &people);
    minute = (people / 12) * 4 + 2;
    printf("%d", minute);
    return 0;
}


/* BC45 С���ָ����� */
#include <stdio.h>
#include <math.h>

 int main() {
     int n = 0, ret = 0, i = 0;
     scanf("%d", &n);
     //��ȡʮ���Ƶ�˼·
     while(n)
     {
         int unit = n % 10;
         unit = (unit % 2 == 0) ? 0 : 1;
         ret += unit * pow(10, i++);
         n /= 10;
     }
     printf("%d", ret);
     return 0;
 }

//�ݹ鷽��
int changeNumber(int n)
{
    int unit = n % 10;
    unit = (unit % 2) ? 1 : 0;
    n /= 10;
    if (n)
        return 10 * changeNumber(n) + unit;
    return unit;
}
int main() {
    int n = 0, ret = 0, i = 0;
    scanf("%d", &n);
    printf("%d", changeNumber(n));
    return 0;
}


/* BC46 KiKi����ĩ�ɼ� */
#include <stdio.h>

int main() {
    int epm = 0, behave = 0, pscore = 0, fscore = 0;
    scanf("%d%d%d%d", &epm, &behave, &pscore, &fscore);
    printf("%.1f", epm * 0.2 + behave * 0.1 + pscore * 0.2 + fscore * 0.5);
    return 0;
}




