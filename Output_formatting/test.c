#define _CRT_SECURE_NO_WARNINGS 1

/* BC16 ʮ������תʮ���� */
#include <stdio.h>

int main() {
    unsigned int num = 0XABCDEF;
    printf("%15d\n", num);
    return 0;
}


/* BC17 ���̶����� */
#include <stdio.h>

int main() {
    int num = 1234;
    // printf("%#o ", num);
    // printf("%#X\n", num);
    printf("%#o %#X\n", num, num);
    return 0;
}


/* BC18 ţţ�Ŀո�ָ� */
#include <stdio.h>

int main() {
    char str = 0;
    int num1 = 0;
    float num2 = 0.0f;
    scanf("%c\n%d\n%f", &str, &num1, &num2);
    printf("%c %d %f", str, num1, num2);
    return 0;
}


