#define _CRT_SECURE_NO_WARNINGS 1

/* BC9 字符转ASCII码 */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    printf("%d", str);
    return 0;
}


/* BC10 实现四舍五入 */
#include <stdio.h>
/*
* C语言中对于浮点数输出的四舍五入是自动进行的。在浮点数的有效位数范围内，
* 当要求保留小数点后n位时，系统会自动根据第n+1的值自动进行四舍五入操作。
*/
int main() {
    double num = 0.0;
    scanf("%lf", &num);
    printf("%.1lf", num);
}



/* BC11 成绩输入输出 */
#include <stdio.h>

int main() {
    int score1 = 0, score2 = 0, score3 = 0;
    scanf("%d %d %d", &score1, &score2, &score3);
    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
    return 0;
}

