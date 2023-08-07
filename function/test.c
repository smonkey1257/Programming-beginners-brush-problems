#define _CRT_SECURE_NO_WARNINGS 1


// non - recursion

/* BC150 小乐乐计算函数 */
#include <stdio.h>

int max3(int num1, int num2, int num3) {
    int temp = (num1 > num2 ? num1 : num2); // num1，num2的最大值
    return (temp > num3 ? temp : num3);     // 三数之中的最大值
}

int main() {
    int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    float m = (1.0 * max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));

    printf("%.2f", m);
    return 0;
}


/* BC151 数位五五 */
#include <stdio.h>

int digitSun(int num) {      // 算一个整数的数位和
    int sum = 0;
    while (num) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int count = 0;
    int left = 0, right = 0;
    scanf("%d %d", &left, &right);
    for (int i = left; i <= right; i++)
    {
        if (digitSun(i) % 5 == 0)    // 如果数位和是5的倍数，count+1
            ++count;
    }

    printf("%d", count);
    return 0;
}


/* BC152 The Biggest Water Problem */
#include <stdio.h>

int digitSun(int num) {      // 算一个整数的数位和
    int sum = 0;
    while (num) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int num = 0;

    scanf("%d", &num);          // 输入

    do
    {
        num = digitSun(num);    // 计算变身数字
    } while (num > 9);

    printf("%d", num);          // 输出
    return 0;
}


/* BC153 [NOIP2010]数字统计 */
#include <stdio.h>

int count_2(int num) {
    int sum = 0;
    while (num) {
        if (num % 10 == 2)
            sum += 1;
        num /= 10;
    }
    return sum;
}

int main() {
    int sum = 0;
    int left = 0, right = 0;
    
    scanf("%d %d", &left, &right);
    
    for (int i = left; i <= right; i++){
        sum += count_2(i);
    }
   
    printf("%d", sum);
    return 0;
}


/* BC154 牛牛的短信 */
#include <stdio.h>

int main() {
    float money = 0.0f;
    int strips = 0, words = 0;

    scanf("%d", &strips);               //短信的条数
    for (int i = 0; i < strips; i++) {
        scanf("%d", &words);            //一条短信的字数

        float price = 0.1;              //一条短信的价格
        if (words > 60)
            price = 0.2;

        money += price;                 // 短信的总费用
    }
    printf("%.1f", money);
    return 0;
}


/* BC155 牛牛的素数和 */
#include <stdio.h>

int isPrime(int num) {                   // 判断一个数是否是素数（质数）
    if (num < 2)
        return 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int sum = 0;
    int left = 0, right = 0;

    scanf("%d %d", &left, &right);      //输入

    for (int i = left; i <= right; i++) { //指数就累加
        if (isPrime(i))
            sum += i;
    }

    printf("%d", sum);                  //输出

    return 0;
}


