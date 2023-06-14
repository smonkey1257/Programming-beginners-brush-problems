#define _CRT_SECURE_NO_WARNINGS 1

/* BC12 学生基本信息输入输出 */
#include <stdio.h>

int main() {
    long long id = 0;
    float C = 0.0;
    float math = 0.0;
    float English = 0.0;

    scanf("%lld;%f,%f,%f", &id, &C, &math, &English);
    printf("The each subject score of No. %lld is %.2f, %.2f, %.2f.",
        id, C, math, English);
    return 0;
}
//id之后用分号,逗号之间不能有空格
//原因是浮点型小数用的是double型变量定义的导致输出时发生了四舍五入的错误

/* BC13 出生日期输入输出 */
#include <stdio.h>

int main() {
    int y = 0, m = 0, d = 0;
    scanf("%4d%2d%2d", &y, &m, &d);
    printf("year=%d\n", y);
    printf("month=%02d\n", m);
    printf("date=%02d\n", d);

    return 0;
}
//被遗忘知识点之1
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；
//被遗忘知识点之2
//通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。

/* BC14 按照格式输入并交换输出 */
#include <stdio.h>
//交换两个数有多种方法
int main() {
    int a = 0;
    int b = 0;
    scanf("a=%d,b=%d", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d,b=%d", a, b);
    return 0;
}

