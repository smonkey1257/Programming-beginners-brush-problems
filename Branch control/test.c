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
























