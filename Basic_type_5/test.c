#define _CRT_SECURE_NO_WARNINGS 1

/* BC15 ��Сдת�� */
#include <stdio.h>

int main() {
    char str = 0;
    while (~scanf("%c", &str))
    {
        getchar();              //���ջ�����������'\n'����Ӱ�������ʽ
        printf("%c\n", str + 32); //��д�ַ������Ӧ��Сд�ַ���ASCII���������32
    }
    return 0;
}