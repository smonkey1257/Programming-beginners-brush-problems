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


/* BC122 ���������ж� */
#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[50] = { 0 };
    int flag1 = 0, flag2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        //�ӵڶ�����ʼ�ж�
        if (i > 0)
        {
            //�ж�����
            if (arr[i] < arr[i - 1])
                flag1 = 1;
            //�жϽ���
            else if (arr[i] > arr[i - 1])
                flag2 = 1;
        }
    }
    if (flag1 && flag2)
        printf("unsorted\n");
    else
        printf("sorted\n");

    return 0;
}


/* BC123 �������в���һ������ */
#include <stdio.h>
#define N 50

int main() {
    int n = 0;
    int array[N] = { 0 };
    int numInsert = 0;

    //����
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &numInsert);

    //����()
    int end = n;
    for (; end > 0 && numInsert < array[end - 1]; end--)
    {
        array[end] = array[end - 1];
    }
    array[end] = numInsert;
    n++;

    //���
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC124 ������ɾ��ָ������ */
#include <stdio.h>
#define N 50
int main() {
    int n = 0;
    int array[N] = { 0 };
    int del = 0;

    //����
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &del);

    //ɾ�� - �漰�±�仯����ǰ����ɾ�������
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] == del)
        {
            for (int j = i; j < n - 1; j++)
                array[j] = array[j + 1];
            n--;
        }
    }

    //���
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC125 ����������ȥ�� */
#include <stdio.h>

int main() {
    //�ⷨ˫ָ��
    int n = 0;
    int array[1000] = { 0 };

    //����
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    //ȥ��
    int src = 1, dest = 1;
    while (src < n)
    {
        int flag = 0;           //flag����0��ʾ���ظ�
        for (int i = 0; i < dest; i++)
        {
            if (array[i] == array[src])
            {
                flag = 1;
                break;
            }
        }
        if (flag)                //�ظ��Ͳ�����
            src++;
        else                    //���ظ��Ϳ���
            array[dest++] = array[src++];
    }

    //���                      //destΪȥ�غ����鳤��
    for (int i = 0; i < dest; i++)
        printf("%d ", array[i]);

    return 0;
}


/* BC126 С���ֲ������� */
#include <stdio.h>

int main() {
    int n = 0;
    int array[100] = { 0 };
    int x = 0;

    //����
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    scanf("%d", &x);

    //�ۼƴ���
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
            ++count;
    }

    //���
    printf("%d", count);

    return 0;
}


/* BC127 ɸѡ�������� */
#include <stdio.h>

int main() {
    int n = 0;
    while (~scanf("%d", &n))
    {
        //����
        int array[100];
        for (int i = 0; i <= 100; i++)
        {
            array[i] = i;
        }

        //ɸѡ - nҲ�ڱ����������֮һ
        int i = 2;
        for (i = 2; i < n; i++)
        {
            int j = 2;
            for (j = 2; i * j <= n; j++)
            {
                array[i * j] = 0;
            }
        }

        //���
        int count = 0;
        for (i = 2; i <= n; i++)
        {
            if (array[i])
            {
                printf("%d ", i);
            }
            else
            {
                count++;
            }
        }
        printf("\n%d", count);
    }
    return 0;
}


/* BC128 �༶�ɼ�������� */
#include <stdio.h>
#define N 5

int main() {
    double array[N][N] = { 0 };

    //����
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%lf", &array[i][j]);
        }
    }

    //���
    for (int i = 0; i < N; i++)
    {
        double sum = 0.0;
        for (int j = 0; j < N; j++)
        {
            printf("%.1lf ", array[i][j]);
            sum += array[i][j];
        }
        printf("%.1lf\n", sum);
    }

    return 0;
}


/* BC129 ����Ԫ�ض�λ */
#include <stdio.h>
#define N 10
#define M 10

int main() {
    int n = 0, m = 0;
    int array[N][M] = { 0 };

    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }

    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d", array[x - 1][y - 1]);

    return 0;
}


/* BC130 ������ */
#include <stdio.h>

int main() {
    int max = -1;
    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    int array[10][10] = { 0 };

    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d", &array[row][col]);
            if (max < array[row][col])
            {
                max = array[row][col];
                x = row + 1;
                y = col + 1;
            }
        }
    }

    printf("%d %d", x, y);

    return 0;
}


/* BC131 ��������ж�*/
#include <stdio.h>

int main() {
    int n = 0, m = 0;
    int array1[10][10] = { 0 };
    int array2[10][10] = { 0 };

    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d", &array1[row][col]);
        }
    }

    int flag = 1;                   //Ĭ����ͬ
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d", &array2[row][col]);
            if (array1[row][col] != array2[row][col])
                flag = 0;
        }
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}


/* BC132 ������� */
#include <stdio.h>

int main() {
    int n = 0, m = 0;
    int array[10][10] = { 0 };
    int sum = 0;

    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d", &array[row][col]);
            if (array[row][col] > 0)
                sum += array[row][col];
        }
    }

    printf("%d", sum);

    return 0;
}


/* BC133 ���;��� */
#include <stdio.h>

int main() {
    int n = 0;
    int array[20][20] = { 0 };

    scanf("%d", &n);

    int num = 1;
    int lmargin = 0, rmargin = n - 1;               //���ұ߽�
    int row = 0, col = 0;                           //����

    while (lmargin <= rmargin)
    {
        while (col <= rmargin)                      //���Ͻ�->���Ͻ�
            array[row][col++] = num++;
        col--, row++;

        while (row <= rmargin)                      //���Ͻ�->���½�
            array[row++][col] = num++;
        row--, col--;

        while (col >= lmargin)                      //���½�->���½�
            array[row][col--] = num++;
        col++, row--;

        lmargin++, rmargin--;                       //�ı�߽�

        while (row >= lmargin)
            array[row--][col] = num++;              //���½�->���Ͻ�
        row++, col++;
    }

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }

    return 0;
}


/* BC134 ���ξ��� */
#include <stdio.h>
#define DOWN -1
#define  UP 1

int main() {
    int n = 0;
    int num = 1;
    int array[1000][1000] = { 0 };
    int flag = UP;

    scanf("%d", &n);
    for (int lines = 0; lines < 2 * n - 1; lines++)
    {
        if (flag == UP)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (i + j == lines)
                        array[i][j] = num++;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i + j == lines)
                        array[i][j] = num++;
                }
            }
        }
        flag *= -1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/* BC135 ͼ�����ƶ� */
#include <stdio.h>

int main() {
    int count = 0;
    int m = 0, n = 0;
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };

    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
            if (arr2[i][j] == arr1[i][j])
                count++;
        }
    }

    printf("%.2lf\n", ((1.0 * count) / (m * n)) * 100);

    return 0;
}


/* BC136 KiKi�ж������Ǿ��� */
#include <stdio.h>

int main() {
    int n = 0;
    int flag = 1;
    int arr[10][10] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}