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


/* BC156 牛牛的数组匹配 */
#include <stdio.h>
extern int abs(int num);

int main(void) {
    int size1 = 0, size2 = 0;
    int arr1 = 0, sum1 = 0;
    int arr2[100] = { 0 }, sum2 = 0;

    scanf("%d %d", &size1, &size2);     // 输入两个数组的长度
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1);
        sum1 += arr1;                   // 输入并累计数组1的和
    }
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);          // 输入数组2
    }

    // 找差最小的和
    int left = 0, right = 0;            // 迭代
    int lindex = 0, rindex = 0;         // 记录最总区间
    int min = sum1;

    for (left = 0; left < size2; left++) {
        sum2 = arr2[left];
        for (right = left + 1; right <= size2; right++) {
            if (abs(sum2 - sum1) < min) {
                min = abs(sum2 - sum1); // 判断差值，小就更新区间记录
                lindex = left;
                rindex = right;
            }
            sum2 += arr2[right];
        }
    }

    for (int i = lindex; i < rindex; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}


/* BC157 素数回文 */
#include <math.h>
#include <stdio.h>

long isPrime(long num) {
    if (num < 2)
        return 0;

    for (int i = 2; i < sqrt(num) + 1; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

long long makePrime(long long num) {
    if (num / 10 == 0) {
        return (num * 10 + num);
    }
    else {
        int tmp = num / 10;
        int ret = 0, count = 0;

        while (tmp) {
            ret = 10 * ret + (tmp % 10);
            tmp /= 10;
            count++;
        }

        return num * pow(10, count) + ret;
    }
}
int main() {
    long long num = 0;

    scanf("%lld", &num);

    // 补全回文数
    num = makePrime(num);

    // 判断回文数
    if (isPrime(num)) {
        printf("prime\n");
    }
    else {
        printf("noprime\n");
    }

    return 0;
}


/* BC158 [NOIP1999]回文数 */
#include <ctype.h>
#include <stdio.h>

int n = 0;
int arr[20] = { 0 }, reverse[20] = { 0 };
char str[20] = { 0 };
int lenght = 0;


int isPrime() {
    for (int i = 1; i <= lenght; i++) {
        if (arr[i] != arr[lenght + 1 - i]) {
            return 0;
        }
    }
    return 1;
}

void strChangeNum() {
    for (lenght = 1; str[lenght - 1]; lenght++) {    // 预留一个位置给进位
        if (str[lenght - 1] >= '0' && str[lenght - 1] <= '9')
            arr[lenght] = str[lenght - 1] - '0';
        else if (str[lenght - 1] >= 'A' && str[lenght - 1] <= 'F')
            arr[lenght] = str[lenght - 1] - 'A' + 10;
    }
    lenght -= 1;
}

void reverseNum() {
    for (int i = 1; i <= lenght; i++) {
        reverse[i] = arr[lenght + 1 - i];
    }
}

void add() {
    for (int i = lenght; i > 0; i--) {
        // 进位
        if ((arr[i] + reverse[i]) / n != 0) {
            ++arr[i - 1];
            arr[i] = arr[i] + reverse[i] - n;
        }
        // 不进位
        else {
            arr[i] = arr[i] + reverse[i];
        }
    }
    if (arr[0] != 0) {
        for (int i = lenght; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = 0;
        ++lenght;
    }
}

int main() {
    int step = 0;

    scanf("%d", &n);    // 进制位数
    scanf("%s", str);   // 数字

    // 字符转换数字
    strChangeNum();

    while (!isPrime()) { // 是回文数时退出循环
        // 逆置
        reverseNum();

        //相加
        add();

        if (++step >= 30)
            break;
    }
    if (step >= 30)
        printf("Impossible!\n");
    else
        printf("STEP=%d", step);
    return 0;
}


/* BC159 兔子的序列 */
#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    int arr[1000] = { 0 };
    int temp = 0;
    int max = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        temp = sqrt(arr[i]);

        // 判断 （元素的开平方后的平方） 与 （原数） 是否相等
        if ((temp *= temp) != arr[i] && arr[i] > max)
            max = arr[i];
    }

    printf("%d", max);

    return 0;
}


/* BC160 小q的数列 */
#include <stdio.h>
typedef long long ll;

int main() {
    ll t = 0, n = 0;
    ll sum = 0, num = 0;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        sum = num = 0;

        while (n) {      // f(n) 的结果是n的二进制位中1的个数
            if (n & 1) {
                sum++;
            }
            n >>= 1;
        }
        for (int j = 0; j < sum; j++) {
            num = num * 2 + 1;  // n的最小值为sum个2^(sum-1) + 1
        }
        printf("%lld %lld\n", sum, num);
    }
    return 0;
}


/* BC161 大吉大利，今晚吃鸡 */
#include <stdio.h>

int main(void)
{
    int n = 0;
    int sum = 0;

    while (~scanf("%d", &n))
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum * 3 + 2;
        }

        printf("%d\n", sum);
    }
    return 0;
}


/* BC162 牛牛的素数判断 */
#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 0;
    int num = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (isPrime(num))
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}


/* BC163 牛牛的替换 */
#include <stdio.h>

int main() {
    int n = 0;
    char src1 = 0, dest1 = 0;
    char src2 = 0, dest2 = 0;
    char str[200] = { 0 };

    scanf("%d %c %c %c %c", &n, &src1, &dest1, &src2, &dest2);
    scanf("%s", str);

    int ptr1 = 0, ptr2 = 0;
    if (str[ptr1] == src1)      // 先处理好第一个
        str[ptr1] = dest1, ptr1++;
    while (ptr2 < n)
    {
        if (str[ptr1] == src1)  // ptr1从第二个开始
            str[ptr1] = dest1;

        if (str[ptr2] == src2)  // ptr2从第一个开始
            str[ptr2] = dest2;

        ptr1++, ptr2++;
    }

    printf("%s", str);
    return 0;
}


/* BC164 牛牛的四叶玫瑰数 */
#include <stdio.h>

int isRose(int num)
{
    int tmp = num;
    int sum = 0;

    while (tmp)
    {
        int unit = tmp % 10;
        sum += (unit * unit * unit * unit);
        tmp /= 10;
    }

    if (sum == num)
        return 1;

    return 0;
}

int main() {
    int left = 0, right = 0;

    scanf("%d %d", &left, &right);

    for (int i = left; i <= right; i++)
    {
        if (isRose(i))
            printf("%d ", i);
    }
    return 0;
}


/* BC165 牛牛的10类人 */
#include <stdio.h>
#define MAX 31

int main() {
    int n = 0;
    int items = 0;
    int sum_1 = 0, sum_0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &items);

        sum_0 = sum_1 = 0;   // 每次都要重置

        while (items)
        {
            if (items & 1)
                sum_1++;
            else
                sum_0++;

            items >>= 1;
        }

        if ((sum_1 % 2 == 0) && (sum_0 % 2 == 0))
            printf("10 ");
        else if (sum_1 % 2 == 0 && (sum_0 % 2 == 1))
            printf("1 ");
        else if (sum_0 % 2 == 0 && (sum_1 % 2 == 1))
            printf("0 ");
        else
            printf("100 ");
    }

    return 0;
}


// recursion

/* BC166 小乐乐走台阶 */
#include<stdio.h>

int fib(int num)
{
    if (num <= 1)
        return 1;

    return fib(num - 1) + fib(num - 2);
}

int main(void)
{
    int n = 0;       // 说白了就是一个斐波那契数列

    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}


/* BC167 函数实现计算一个数的阶乘 */
#include <iostream>
using namespace std;

long long factorial(int n);

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

long long factorial(int n) {

    // write your code here......
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);

}