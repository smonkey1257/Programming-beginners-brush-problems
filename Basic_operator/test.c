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


