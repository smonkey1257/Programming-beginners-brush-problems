#define _CRT_SECURE_NO_WARNINGS 1


/* BC50 你是天才吗？*/
#include <stdio.h>

int main() {
    int iq = 0;
    while (~scanf("%d", &iq))
    {
        if (iq >= 140)
        {
            printf("Genius\n");
        }
    }
    return 0;
}


/* BC51 及格分数 */
#include <stdio.h>

int main() {
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}


/* BC52 判断整数奇偶性 */
#include <stdio.h>

int main() {
    int n = 0;
    while (~scanf("%d", &n))
    {
        n % 2 ? printf("Odd\n") : printf("Even\n");//三元运算符实现分支控制
    }
    return 0;
}


/* BC53 判断是元音还是辅音 */
#include <stdio.h>

int main() {
    char letter = 0;
    while (~scanf("%c", &letter))
    {
        if (letter == 'A' || letter == 'a')
            printf("Vowel\n");
        else if (letter == 'E' || letter == 'e')
            printf("Vowel\n");
        else if (letter == 'I' || letter == 'i')
            printf("Vowel\n");
        else if (letter == 'O' || letter == 'o')
            printf("Vowel\n");
        else if (letter == 'U' || letter == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
        getchar();
    }
    return 0;
}


/* BC54 牛牛的判断题 */
#include <stdio.h>

int main() {
    int x = 0, l = 0, r = 0;
    scanf("%d %d %d", &x, &l, &r);
    if (l <= x && x <= r)
    {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    return 0;
}


/* BC55 判断闰年 */
#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}


/* BC56 判断字母 */
#include <stdio.h>

int main() {
    char str = 0;
    scanf("%c", &str);
    if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}


/* BC57 四季 */
#include <stdio.h>

int main() {
    int time = 0;
    scanf("%6d", &time);
    time %= 100;
    if (3 <= time && time <= 5)
        printf("spring\n");
    else if (6 <= time && time <= 8)
        printf("summer\n");
    else if (9 <= time && time <= 11)
        printf("autumn\n");
    else
        printf("winter\n");
    return 0;
}


/* BC58 健康评估 */
#include <stdio.h>

int main() {
    float weight = 0.0f, height = 0.0f;
    float BMI = 0.0f;
    scanf("%f %f", &weight, &height);
    BMI = weight / (height * height);
    if (BMI <= 23.9 && 18.5 <= BMI)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}


/* BC59 小乐乐找最大数 */
#include <stdio.h>

int main() {
    int num = 0;
    int max = 0;
    scanf("%d", &num);
    max = num;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("%d", max);
    return 0;
}


/* BC60 判断是不是字母 */
#include <stdio.h>

int main() {
    char str = 0;
    while (~scanf("%c", &str))
    {
        getchar();
        if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z'))
            printf("%c is an alphabet.\n", str);
        else
            printf("%c is not an alphabet.\n", str);
    }
    return 0;
}


/* BC61 牛牛的二三七整除 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    if (!(n % 2) || !(n % 3) || !(n % 7))
    {
        if (!(n % 2)) printf("2 ");
        if (!(n % 3)) printf("3 ");
        if (!(n % 7)) printf("7 ");
    }
    else
        putchar('n');
    return 0;
}


/* BC62 统计数据正负个数 */
#include <stdio.h>

int main() {
    int positive = 0, negative = 0;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n > 0)
            positive++;
        if (n < 0)
            negative++;
    }
    printf("positive:%d\nnegative:%d", positive, negative);
    return 0;
}


/* BC63 网购 */
#include <stdio.h>

int main() {
    float price = 0.0f, money = 0.0f;
    int month = 0, day = 0, flag = 0;
    scanf("%f %d %d %d", &price, &month, &day, &flag);
    if (flag == 1) {
        if (month == 11) {
            money = price * 0.7 - 50;
        }
        else {
            money = price * 0.8 - 50;
        }
    }
    else {
        if (month == 11) {
            money = price * 0.7;
        }
        else {
            money = price * 0.8;
        }
    }
    money >= 0 ? printf("%.2f", money) : printf("0.00");
    return 0;
}


/* BC64 牛牛的快递 */
#include <stdio.h>

int main() {
    float weight = 0.0f;
    int money = 20;
    char isUrgent = 0;
    scanf("%f %c", &weight, &isUrgent);
    if (weight <= 1.0) {
        money += isUrgent == 'y' ? 5 : money;
    }
    else {
        money += weight > (int)weight ? ((int)(weight - 1)) + 1 : (weight - 1);
        isUrgent == 'y' ? money += 5.0f : money;
    }
    printf("%d", money);
    return 0;
}


/* BC65 计算商品打折结算金额 */
#include <stdio.h>

int main() {
    float money = 0.0f;
    scanf("%f", &money);
    if (100 <= money && money < 500)
        money *= 0.9;
    else if (500 <= money && money < 2000)
        money *= 0.8;
    else if (2000 <= money && money < 5000)
        money *= 0.7;
    else if (money >= 5000)
        money *= 0.6;
    else
        money = money;
    printf("%.1f", money);
    return 0;
}


















