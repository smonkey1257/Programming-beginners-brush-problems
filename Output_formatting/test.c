#define _CRT_SECURE_NO_WARNINGS 1

/* BC16 十六进制转十进制 */
#include <stdio.h>

int main() {
    unsigned int num = 0XABCDEF;
    printf("%15d\n", num);
    return 0;
}