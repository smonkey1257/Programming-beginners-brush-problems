#define _CRT_SECURE_NO_WARNINGS 1


/* BC116 [NOIP2013]�������� */
#include <stdio.h>

int GetX(int num, int x)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 10 == x)
            count++;
        num /= 10;
    }
    return count;
}

int main() {
    int n = 0;
    int x = 0;
    int count = 0;

    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        count += GetX(i, x);
    }
    printf("%d", count);
    return 0;
}


/* BC117 ������� */
#include <stdio.h>

int main() {
    int array[10] = { 0 };

    //����
    for (int i = 0; i < 10; i++)
    {
        (void)scanf("%d", &array[i]);
    }

    //���
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC118 N����֮�� */
#include <stdio.h>

int main() {
    int n = 0;
    int array[50];
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d", sum);
    return 0;
}


/* BC119 ��߷�����ͷ�֮�� */
#include <stdio.h>

int main() {
    int n = 0;
    int max = -1;
    int min = 101;
    int array[10000] = { 0 };

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        max = max < array[i] ? array[i] : max;
        min = min > array[i] ? array[i] : min;
    }
    printf("%d", max - min);
    return 0;
}


/* BC120 ����ǰ���� */
#include <stdio.h>
#include <stdlib.h>

int compare(const void* p1, const void* p2)
{
    return *(int*)p2 - *(int*)p1;
}

int main() {
    int n = 0;
    int array[50] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    qsort(array, n, sizeof(int), compare);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC121 �������кϲ� */
#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;
    int array_m[1000] = { 0 };
    int array_n[1000] = { 0 };
    int array_total[2000] = { 0 };

    //����
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &array_n[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &array_m[i]);

    //�鲢
    int index_n = 0;
    int index_m = 0;
    int index_total = 0;
    while (index_n < n && index_m < m)
    {
        if (array_n[index_n] < array_m[index_m])
            array_total[index_total++] = array_n[index_n++];
        else
            array_total[index_total++] = array_m[index_m++];
    }
    if (index_n == n)
    {
        while (index_m < m)
            array_total[index_total++] = array_m[index_m++];
    }
    if (index_m == m)
    {
        while (index_n < n)
            array_total[index_total++] = array_n[index_n++];
    }

    //���
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", array_total[i]);
    }
    return 0;
}


