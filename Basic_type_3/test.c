#define _CRT_SECURE_NO_WARNINGS 1

/* BC9 �ַ�תASCII�� */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    printf("%d", str);
    return 0;
}


/* BC10 ʵ���������� */
#include <stdio.h>
/*
* C�����ж��ڸ���������������������Զ����еġ��ڸ���������Чλ����Χ�ڣ�
* ��Ҫ����С�����nλʱ��ϵͳ���Զ����ݵ�n+1��ֵ�Զ������������������
*/
int main() {
    double num = 0.0;
    scanf("%lf", &num);
    printf("%.1lf", num);
}



/* BC11 �ɼ�������� */
#include <stdio.h>

int main() {
    int score1 = 0, score2 = 0, score3 = 0;
    scanf("%d %d %d", &score1, &score2, &score3);
    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
    return 0;
}

