#define _CRT_SECURE_NO_WARNINGS 1


/* BC50 ���������*/
#include <stdio.h>

int main() {
    int iq = 0;
    while (~scanf("%d", &iq))
    {
        if (iq >= 140)
        {
            printf("Genius\n");
        }
    }
    return 0;
}


/* BC51 ������� */
#include <stdio.h>

int main() {
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}


/* BC52 �ж�������ż�� */
#include <stdio.h>

int main() {
    int n = 0;
    while (~scanf("%d", &n))
    {
        n % 2 ? printf("Odd\n") : printf("Even\n");//��Ԫ�����ʵ�ַ�֧����
    }
    return 0;
}


/* BC53 �ж���Ԫ�����Ǹ��� */
#include <stdio.h>

int main() {
    char letter = 0;
    while (~scanf("%c", &letter))
    {
        if (letter == 'A' || letter == 'a')
            printf("Vowel\n");
        else if (letter == 'E' || letter == 'e')
            printf("Vowel\n");
        else if (letter == 'I' || letter == 'i')
            printf("Vowel\n");
        else if (letter == 'O' || letter == 'o')
            printf("Vowel\n");
        else if (letter == 'U' || letter == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
        getchar();
    }
    return 0;
}


/* BC54 ţţ���ж��� */
#include <stdio.h>

int main() {
    int x = 0, l = 0, r = 0;
    scanf("%d %d %d", &x, &l, &r);
    if (l <= x && x <= r)
    {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    return 0;
}


/* BC55 �ж����� */
#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}


/* BC56 �ж���ĸ */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}


/* BC57 �ļ� */
#include <stdio.h>

int main() {
    int time = 0;
    scanf("%6d", &time);
    time %= 100;
    if (3 <= time && time <= 5)
        printf("spring\n");
    else if (6 <= time && time <= 8)
        printf("summer\n");
    else if (9 <= time && time <= 11)
        printf("autumn\n");
    else
        printf("winter\n");
    return 0;
}


/* BC58 �������� */
#include <stdio.h>

int main() {
    float weight = 0.0f, height = 0.0f;
    float BMI = 0.0f;
    scanf("%f %f", &weight, &height);
    BMI = weight / (height * height);
    if (BMI <= 23.9 && 18.5 <= BMI)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}


/* BC59 С����������� */
#include <stdio.h>

int main() {
    int num = 0;
    int max = 0;
    scanf("%d", &num);
    max = num;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("%d", max);
    return 0;
}


/* BC60 �ж��ǲ�����ĸ */
#include <stdio.h>

int main() {
    char str = 0;
    while (~scanf("%c", &str))
    {
        getchar();
        if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z'))
            printf("%c is an alphabet.\n", str);
        else
            printf("%c is not an alphabet.\n", str);
    }
    return 0;
}


/* BC61 ţţ�Ķ��������� */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    if (!(n % 2) || !(n % 3) || !(n % 7))
    {
        if (!(n % 2)) printf("2 ");
        if (!(n % 3)) printf("3 ");
        if (!(n % 7)) printf("7 ");
    }
    else
        putchar('n');
    return 0;
}


/* BC62 ͳ�������������� */
#include <stdio.h>

int main() {
    int positive = 0, negative = 0;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n > 0)
            positive++;
        if (n < 0)
            negative++;
    }
    printf("positive:%d\nnegative:%d", positive, negative);
    return 0;
}


/* BC63 ���� */
#include <stdio.h>

int main() {
    float price = 0.0f, money = 0.0f;
    int month = 0, day = 0, flag = 0;
    scanf("%f %d %d %d", &price, &month, &day, &flag);
    if (flag == 1) {
        if (month == 11) {
            money = price * 0.7 - 50;
        }
        else {
            money = price * 0.8 - 50;
        }
    }
    else {
        if (month == 11) {
            money = price * 0.7;
        }
        else {
            money = price * 0.8;
        }
    }
    money >= 0 ? printf("%.2f", money) : printf("0.00");
    return 0;
}


/* BC64 ţţ�Ŀ�� */
#include <stdio.h>

int main() {
    float weight = 0.0f;
    int money = 20;
    char isUrgent = 0;
    scanf("%f %c", &weight, &isUrgent);
    if (weight <= 1.0) {
        money += isUrgent == 'y' ? 5 : money;
    }
    else {
        money += weight > (int)weight ? ((int)(weight - 1)) + 1 : (weight - 1);
        isUrgent == 'y' ? money += 5.0f : money;
    }
    printf("%d", money);
    return 0;
}


/* BC65 ������Ʒ���۽����� */
#include <stdio.h>

int main() {
    float money = 0.0f;
    scanf("%f", &money);
    if (100 <= money && money < 500)
        money *= 0.9;
    else if (500 <= money && money < 2000)
        money *= 0.8;
    else if (2000 <= money && money < 5000)
        money *= 0.7;
    else if (money >= 5000)
        money *= 0.6;
    else
        money = money;
    printf("%.1f", money);
    return 0;
}


/* BC66 ţţ��ͨ�� */
#include <stdio.h>

int main() {
    int distance = 0;
    scanf("%d", &distance);
    printf("%c", distance < (distance / 10 + 10) ? 'w' : 'v');
    return 0;
}


/* BC67 ţţ�Ľ�� */
#include <stdio.h>

int main() {
    int x = 0, y = 0;
    int x1 = 0, y1 = 0;

    scanf("%d %d", &x, &y);
    scanf("%d %d", &x1, &y1);
    if (x == x1) {//������
        (y1 > y) ? printf("u") : printf("d");
    }
    else if (y == y1) {//������
        (x1 > x) ? printf("r") : printf("l");
    }
    return 0;
}


/* BC68 ţţ��һ�� */
#include <stdio.h>

int main() {
    int day = 0;
    scanf("%d", &day);
    switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    return 0;
}


/* BC69 HTTP״̬�� */
#include <stdio.h>

int main() {
    int http = 0;
    while (~scanf("%d", &http))
    {
        if (http == 200) printf("OK\n");
        if (http == 202) printf("Accepted\n");
        if (http == 400) printf("Bad Request\n");
        if (http == 403) printf("Forbidden\n");
        if (http == 404) printf("Not Found\n");
        if (http == 500) printf("Internal Server Error\n");
        if (http == 502) printf("Bad Gateway\n");
    }
    return 0;
}


/* BC70 ���㵥λ��Ծ���� */
#include <stdio.h>

int main() {
    double t = 0.0;
    while (~scanf("%lf", &t))
    {
        if (t > 0)
            printf("1\n");
        else if (t < 0)
            printf("0\n");
        else
            printf("0.5\n");
    }
    return 0;
}


/* BC71 �������ж� */
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    while (~scanf("%d %d %d", &a, &b, &c))
    {
        if (a + b > c && b + c > a && a + c > b)
        {
            if (a == b && b == c && a == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}


/* BC72 ţţ�ļƻ� */
#include <stdio.h>

int main() {
    int y = 0, m = 0, d = 0;
    int y1 = 0, m1 = 0, d1 = 0;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);
    if ((y1 == y) && (m1 == m) && (d1 >= d) || (y1 > y))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}


/* BC73 ����һԪ���η��� */
#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    while (~scanf("%lf %lf %lf", &a, &b, &c))
    {

        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            double x1 = 0.0, x2 = 0.0;
            double deta = b * b - 4 * a * c;
            x1 = ((-b) - sqrt(deta)) / (2 * a);
            x2 = ((-b) + sqrt(deta)) / (2 * a);

            if (deta > 0)//ʵ����
            {
                printf("x1=%.2lf;x2=%.2lf", x1, x2);
            }
            else if (deta == 0)//�ظ�
            {
                if (-b + sqrt(deta) == 0)
                    printf("x1=x2=%.2lf\n", -b + sqrt(deta));
                else
                    printf("x1=x2=%.2lf\n", x2);
            }
            else//������
            {
                double real = -b / 2.0 / a;
                double imaginary = sqrt(-deta) / (2 * a);
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi",
                    real, imaginary, real, imaginary);
            }
        }
    }
    return 0;
}














