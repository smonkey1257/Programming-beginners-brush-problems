#define _CRT_SECURE_NO_WARNINGS 1

/* BC16 十六进制转十进制 */
#include <stdio.h>

int main() {
    unsigned int num = 0XABCDEF;
    printf("%15d\n", num);
    return 0;
}


/* BC17 缩短二进制 */
#include <stdio.h>

int main() {
    int num = 1234;
    // printf("%#o ", num);
    // printf("%#X\n", num);
    printf("%#o %#X\n", num, num);
    return 0;
}


/* BC18 牛牛的空格分隔 */
#include <stdio.h>

int main() {
    char str = 0;
    int num1 = 0;
    float num2 = 0.0f;
    scanf("%c\n%d\n%f", &str, &num1, &num2);
    printf("%c %d %f", str, num1, num2);
    return 0;
}


/* BC19 牛牛的对齐 */
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d%8d%8d\n", a, b, c);
    return 0;
}
//第二三个数字占 8 个空格靠右对齐输出


/* BC20 进制A+B */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%x %o", &a, &b);
    printf("%d", a + b);
    return 0;
}
//数据在内存中以二进制补码的形式存储和计算，打印时再转换成原码输出
