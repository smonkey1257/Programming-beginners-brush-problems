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




















