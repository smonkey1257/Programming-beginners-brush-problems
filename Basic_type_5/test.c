#define _CRT_SECURE_NO_WARNINGS 1

/* BC15 大小写转换 */
#include <stdio.h>

int main() {
    char str = 0;
    while (~scanf("%c", &str))
    {
        getchar();              //吸收缓冲区遗留的'\n'避免影响输出格式
        printf("%c\n", str + 32); //大写字符和其对应的小写字符在ASCII码上相差了32
    }
    return 0;
}