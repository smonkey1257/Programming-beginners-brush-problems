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


