#define _CRT_SECURE_NO_WARNINGS 1

/* BC6 ţţ�ĵڶ������� */
#include <stdio.h>
//�ⷨһ��
int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d\n", num2);
    return 0;
}

//�ⷨ����
int main(void)
{
    int arr[3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[1]);
    return 0;
}

/* BC7 ţţ���ַ����� */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            putchar(str);
        }
        putchar('\n');
    }
    return 0;
}

/* BC8 ţţ���ַ����� */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    int n = 5;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)//��ӡÿһ��ǰ��Ŀո�
        {
            putchar(' ');
        }
        for (int j = 0; j < 2 * i + 1; j++)//��ӡÿһ�е��ַ�
        {
            putchar(str);
        }
        putchar('\n');
    }
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < n / 2 - i; j++)//��ӡÿһ��ǰ��Ŀո�
        {
            putchar(' ');
        }
        for (int j = 0; j < 2 * i + 1; j++)//��ӡÿһ�е��ַ�
        {
            putchar(str);
        }
        putchar('\n');
    }
    return 0;
}
