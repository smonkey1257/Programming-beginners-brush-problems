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

