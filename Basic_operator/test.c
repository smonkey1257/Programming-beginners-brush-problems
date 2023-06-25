#define _CRT_SECURE_NO_WARNINGS 1

/* BC21 牛牛学加法 */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}


/* BC22 牛牛学除法 */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a / b);
    return 0;
}


/* BC23 牛牛学取余 */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a % b);
    return 0;
}


/* BC24 浮点数的个位数字 */
#include <stdio.h>

int main() {
    float a = 0.0f;
    scanf("%f", &a);
    printf("%d", ((int)a) % 10);
    return 0;
}


/* BC25 牛牛买电影票 */
#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);
    printf("%d00", x);
    return 0;
}
//剑走偏锋，但优点在于可以表示更多的数字


/* BC26 计算带余除法 */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;
}


/* BC27 整数的个位 */
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    printf("%d", num % 10);
    return 0;
}


/* BC28 整数的十位 */
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    printf("%d", (num / 10) % 10);
    return 0;
}


/* BC29 开学？ */
#include <stdio.h>

int main() {
    int week = 0, day = 0;
    scanf("%d %d", &week, &day);
    printf("%d", (week + day - 1) % 7 + 1);//避免周日余数为0
    return 0;
}


/* BC30 时间转换 */
#include <stdio.h>

int main() {
    int seconds = 0;
    scanf("%d", &seconds);
    printf("%d %d %d", (seconds / 3600), (seconds % 3600) / 60, (seconds % 60));
    return 0;
}


/* BC31 2的n次方计算 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", (1 << n));
    return 0;
}


/* BC32 你能活多少秒 */
#include <stdio.h>

int main() {
    int age = 0;
    scanf("%d", &age);
    printf("%d0000", age * 3156);
    return 0;
}


/* BC33 统计成绩 */
#include <stdio.h>

int main() {
    float ave = 0.0f, max = 0.0f, min = 0.0f;
    int n = 0;
    float tmp = 0.0f;

    //输入
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &tmp);
        if (i == 0)
        {
            min = max = tmp;
        }
        else
        {
            if (tmp > max)
                max = tmp;
            else if (tmp < min)
                min = tmp;
        }
        ave += tmp;
    }

    //输出最大值、最小值、平均值
    printf("%.2f %.2f %.2f\n", max, min, ave /= n);
    return 0;
}


/* BC34 计算三角形的周长和面积 */
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.0f, b = 0.0f, c = 0.0f;
    float C = 0.0f, S = 0.0f, p = 0.0f;

    scanf("%f %f %f", &a, &b, &c);
    C = (a + b + c);
    p = C / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));//海伦公式
    printf("circumference=%.2f area=%.2f\n", C, S);

    return 0;
}


/* BC35 KiKi和酸奶 */
#include <stdio.h>

int main() {
    int n = 0, h = 0, m = 0;
    while (~scanf("%d %d %d", &n, &h, &m))
    {
        printf("%d\n", ((n * h) - m) / h);
    }
    return 0;
}


/* BC36 温度转换 */
#include <stdio.h>

int main() {
    float f = 0.0f;
    scanf("%f", &f);
    printf("%.3f", (5.0 / 9.0) * (f - 32));
    return 0;
}


/* BC37 牛牛的圆 */
#include <stdio.h>

int main() {
    float r = 0.0f, pi = 3.14;
    scanf("%f", &r);
    printf("%.2f", pi * r * r);
    return 0;
}


/* BC38 牛牛的并联电路 */
#include <stdio.h>

int main() {
    float r1 = 0.0f, r2 = 0.0f;
    scanf("%f %f", &r1, &r2);
    printf("%.1f", 1.0 / ((1.0 / r1) + (1.0 / r2)));
    return 0;
}


/* BC39 牛牛的水杯 */
#include <stdio.h>

int main() {
    int height = 0, radius = 0;
    scanf("%d %d", &height, &radius);
    float V = (3.14 * height * radius * radius) / 1000;
    int caps = 10 / V;
    (10 / V) == caps ? printf("%.d", caps) : printf("%d", caps + 1);
    return 0;
}
//判断浮点数除法结果和整数除法结果是否相同，借以判断杯数是否相同
















