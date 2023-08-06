#define _CRT_SECURE_NO_WARNINGS 1


/* BC116 [NOIP2013]记数问题 */
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


/* BC117 逆序输出 */
#include <stdio.h>

int main() {
    int array[10] = { 0 };

    //输入
    for (int i = 0; i < 10; i++)
    {
        (void)scanf("%d", &array[i]);
    }

    //输出
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC118 N个数之和 */
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


/* BC119 最高分与最低分之差 */
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


/* BC120 争夺前五名 */
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


/* BC121 有序序列合并 */
#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;
    int array_m[1000] = { 0 };
    int array_n[1000] = { 0 };
    int array_total[2000] = { 0 };

    //输入
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &array_n[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &array_m[i]);

    //归并
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

    //输出
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", array_total[i]);
    }
    return 0;
}


/* BC122 有序序列判断 */
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
        //从第二个开始判断
        if (i > 0)
        {
            //判断升序
            if (arr[i] < arr[i - 1])
                flag1 = 1;
            //判断降序
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


/* BC123 有序序列插入一个整数 */
#include <stdio.h>
#define N 50

int main() {
    int n = 0;
    int array[N] = { 0 };
    int numInsert = 0;

    //输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &numInsert);

    //插入()
    int end = n;
    for (; end > 0 && numInsert < array[end - 1]; end--)
    {
        array[end] = array[end - 1];
    }
    array[end] = numInsert;
    n++;

    //输出
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC124 序列中删除指定数字 */
#include <stdio.h>
#define N 50
int main() {
    int n = 0;
    int array[N] = { 0 };
    int del = 0;

    //输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &del);

    //删除 - 涉及下标变化，从前往后删会出问题
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] == del)
        {
            for (int j = i; j < n - 1; j++)
                array[j] = array[j + 1];
            n--;
        }
    }

    //输出
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


/* BC125 序列中整数去重 */
#include <stdio.h>

int main() {
    //解法双指针
    int n = 0;
    int array[1000] = { 0 };

    //输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    //去重
    int src = 1, dest = 1;
    while (src < n)
    {
        int flag = 0;           //flag等于0表示不重复
        for (int i = 0; i < dest; i++)
        {
            if (array[i] == array[src])
            {
                flag = 1;
                break;
            }
        }
        if (flag)                //重复就不拷贝
            src++;
        else                    //不重复就拷贝
            array[dest++] = array[src++];
    }

    //输出                      //dest为去重后数组长度
    for (int i = 0; i < dest; i++)
        printf("%d ", array[i]);

    return 0;
}


/* BC126 小乐乐查找数字 */
#include <stdio.h>

int main() {
    int n = 0;
    int array[100] = { 0 };
    int x = 0;

    //输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    scanf("%d", &x);

    //累计次数
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
            ++count;
    }

    //输出
    printf("%d", count);

    return 0;
}


/* BC127 筛选法求素数 */
#include <stdio.h>

int main() {
    int n = 0;
    while (~scanf("%d", &n))
    {
        //输入
        int array[100];
        for (int i = 0; i <= 100; i++)
        {
            array[i] = i;
        }

        //筛选 - n也在被清零的数字之一
        int i = 2;
        for (i = 2; i < n; i++)
        {
            int j = 2;
            for (j = 2; i * j <= n; j++)
            {
                array[i * j] = 0;
            }
        }

        //输出
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


/* BC128 班级成绩输入输出 */
#include <stdio.h>
#define N 5

int main() {
    double array[N][N] = { 0 };

    //输入
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%lf", &array[i][j]);
        }
    }

    //输出
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


/* BC129 矩阵元素定位 */
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


/* BC130 最高身高 */
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


/* BC131 矩阵相等判定*/
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

    int flag = 1;                   //默认相同
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


/* BC132 矩阵计算 */
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


/* BC133 回型矩阵 */
#include <stdio.h>

int main() {
    int n = 0;
    int array[20][20] = { 0 };

    scanf("%d", &n);

    int num = 1;
    int lmargin = 0, rmargin = n - 1;               //左右边界
    int row = 0, col = 0;                           //行列

    while (lmargin <= rmargin)
    {
        while (col <= rmargin)                      //左上角->右上角
            array[row][col++] = num++;
        col--, row++;

        while (row <= rmargin)                      //右上角->右下角
            array[row++][col] = num++;
        row--, col--;

        while (col >= lmargin)                      //右下角->左下角
            array[row][col--] = num++;
        col++, row--;

        lmargin++, rmargin--;                       //改变边界

        while (row >= lmargin)
            array[row--][col] = num++;              //左下角->左上角
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


/* BC134 蛇形矩阵 */
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


/* BC135 图像相似度 */
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


/* BC136 KiKi判断上三角矩阵 */
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


/* BC137 序列重组矩阵 */
#include <stdio.h>

int main() {
    int n = 0;
    int m = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/*  BC138 矩阵转置 */
#include <stdio.h>

int main() {
    int n = 0;
    int m = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}


/* BC139 矩阵交换 */
#include <stdio.h>

void Print(int arr[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char option = 0;
    int  times = 0, num1 = 0, num2 = 0;
    int row = 0, col = 0;
    int arr[10][10] = { 0 };

    scanf("%d %d", &row, &col);      // 行列
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]); // 矩阵
        }
    }
    scanf("%d", &times);             // 交换次数
    while (times--)                   // 具体交换的行、列
    {
        getchar();                   // 吸收换行符
        scanf("%c %d %d", &option, &num1, &num2);
        // printf("%c\n", option);
        switch (option)
        {
        case 'r':
            for (int i = 0; i < col; i++)
            {
                // printf("row\n");
                int temp = arr[num2 - 1][i];
                arr[num2 - 1][i] = arr[num1 - 1][i];
                arr[num1 - 1][i] = temp;
            }
            break;
        case 'c':
            for (int i = 0; i < row; i++)
            {
                // printf("col\n");
                int temp = arr[i][num1 - 1];
                arr[i][num1 - 1] = arr[i][num2 - 1];
                arr[i][num2 - 1] = temp;
            }
            break;
        default:
            // do nothing
            break;
        }
    }

    Print(arr, row, col);

    return 0;
}


/* BC140 杨辉三角 */
#include <stdio.h>

int main() {
    int n = 0;
    int arr[30][30] = { 0 };

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i || j == 0)
                arr[i][j] = 1;
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/* BC141 井字棋 */
#include <stdio.h>
#define ROW 3
#define COL 3

char IsWin(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')  // 行判断
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')  // 列判断
            return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')      // 正对角线
        return board[1][1];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')      // 反对角线
        return board[1][1];
    return ' ';
}

int main() {
    char board[ROW][COL];

    for (int i = 0; i < ROW; i++) {           // 输入
        for (int j = 0; j < COL; j++) {
            scanf("%c ", &board[i][j]);
        }
    }

    char status = IsWin(board, ROW, COL);   // 判断
    if (status == 'K')
        printf("KiKi wins!");
    else if (status == 'B')
        printf("BoBo wins!");
    else
        printf("No winner!");
    return 0;
}


/* BC142 扫雷 */
#include <stdio.h>
#include <string.h>
#define MAXSIZE 1002

int main() {
    int n = 0, m = 0;
    char mine[MAXSIZE][MAXSIZE];
    int nums[MAXSIZE][MAXSIZE];
    int X_axis[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    int Y_axis[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };

    memset(mine, '.', sizeof(mine));      // 初始化
    memset(nums, 0, sizeof(nums));

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {             // 输入
        char tmp = getchar();// 最关键的一步，用一个临时变量吸收\n, 避免\n污染数组
        for (int j = 1; j <= m; j++) {
            scanf("%c", &mine[i][j]);
        }
    }

    // 统计雷个数
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mine[i][j] == '*')
                for (int k = 0; k < 8; k++)
                    nums[(X_axis[k] + i)][(Y_axis[k] + j)] += 1;
        }
    }

    // 输出数字矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mine[i][j] == '*')
                printf("*");
            else
                printf("%d", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/* BC143 [NOIP2018]标题统计 */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char str[100] = { 0 };

    // 输入
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalnum(str[i]))
            ++count;
    }

    // 输出
    printf("%d\n", count);
    return 0;
}


/* BC144 登录验证 */
#include <stdio.h>
#include <string.h>

int main() {
    char user[] = "admin";
    char passwd[] = "admin";
    char inputUser[10] = { 0 };
    char inputPasswd[10] = { 0 };

    while (~scanf("%s %s", inputUser, inputPasswd)) {
        if (strcmp(inputUser, user) + strcmp(inputPasswd, passwd) == 0)
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    }

    return 0;
}


/* BC145 [NOIP2008]笨小猴 */
#include <stdio.h>
#include <string.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int maxn = -1, minn = 101;
    char arr[26] = { 0 };
    char str[101] = { 0 };

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        ++arr[str[i] - 'a'];
    }

    for (int i = 0; i < strlen(str); i++) {
        if (maxn < arr[str[i] - 'a'])
            maxn = arr[str[i] - 'a'];
        if (minn > arr[str[i] - 'a'])
            minn = arr[str[i] - 'a'];
    }

    if (isPrime(maxn - minn))
        printf("Lucky Word\n%d", maxn - minn);
    else
        printf("No Answer\n0");

    return 0;
}


/* BC146 添加逗号 */
#include <stdio.h>
#include <string.h>

int main() {
    char num[20] = { 0 };
    scanf("%s", num);
    int len = strlen(num);
    for (int i = 1; i <= len; i++)
    {
        printf("%c", num[i - 1]);
        if ((len - i) % 3 == 0 && i != len)
            printf(",");
    }
    return 0;
}


/* BC147 竞选社长 */
#include <stdio.h>

int main() {
    char arr[2] = { 0 };
    char str = 0;
    while ((str = getchar()) != '0')
    {
        ++arr[str - 'A'];
    }
    if (arr[0] > arr[1]) // A 竞选成功
        printf("A\n");
    else if (arr[0] < arr[1]) // B 竞选成功
        printf("B\n");
    else
        printf("E\n"); // 平票
    return 0;
}


/* BC148 字符串操作 */
#include <stdio.h>

int main() {
    char tmp = 0;
    char str[101] = { 0 };
    char src = 0, dest = 0;                 // src —— 修改前；dest —— 修改后
    int n = 0, m = 0;                       // n —— 字符长度；m —— 操作次数
    int left = 0, right = 0;                // 区间

    scanf("%d %d", &n, &m);
    scanf("%s", str);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d %c %c", &left, &right, &src, &dest);
        for (int j = left; j <= right; j++)  // 修改
        {
            if (str[j - 1] == src)
                str[j - 1] = dest;
        }
    }
    printf("%s", str);                      // 输出
    return 0;
}


/* BC149 简写单词 */
#include <ctype.h>
#include <stdio.h>

int main() {
    char str[50] = { 0 };

    while (~scanf("%s", str)) {
        printf("%c", toupper(str[0]));
    }
    return 0;
}