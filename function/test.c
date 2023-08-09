#define _CRT_SECURE_NO_WARNINGS 1


// non - recursion

/* BC150 С���ּ��㺯�� */
#include <stdio.h>

int max3(int num1, int num2, int num3) {
    int temp = (num1 > num2 ? num1 : num2); // num1��num2�����ֵ
    return (temp > num3 ? temp : num3);     // ����֮�е����ֵ
}

int main() {
    int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    float m = (1.0 * max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));

    printf("%.2f", m);
    return 0;
}


/* BC151 ��λ���� */
#include <stdio.h>

int digitSun(int num) {      // ��һ����������λ��
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
        if (digitSun(i) % 5 == 0)    // �����λ����5�ı�����count+1
            ++count;
    }

    printf("%d", count);
    return 0;
}


/* BC152 The Biggest Water Problem */
#include <stdio.h>

int digitSun(int num) {      // ��һ����������λ��
    int sum = 0;
    while (num) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int num = 0;

    scanf("%d", &num);          // ����

    do
    {
        num = digitSun(num);    // �����������
    } while (num > 9);

    printf("%d", num);          // ���
    return 0;
}


/* BC153 [NOIP2010]����ͳ�� */
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


/* BC154 ţţ�Ķ��� */
#include <stdio.h>

int main() {
    float money = 0.0f;
    int strips = 0, words = 0;

    scanf("%d", &strips);               //���ŵ�����
    for (int i = 0; i < strips; i++) {
        scanf("%d", &words);            //һ�����ŵ�����

        float price = 0.1;              //һ�����ŵļ۸�
        if (words > 60)
            price = 0.2;

        money += price;                 // ���ŵ��ܷ���
    }
    printf("%.1f", money);
    return 0;
}


/* BC155 ţţ�������� */
#include <stdio.h>

int isPrime(int num) {                   // �ж�һ�����Ƿ���������������
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

    scanf("%d %d", &left, &right);      //����

    for (int i = left; i <= right; i++) { //ָ�����ۼ�
        if (isPrime(i))
            sum += i;
    }

    printf("%d", sum);                  //���

    return 0;
}


/* BC156 ţţ������ƥ�� */
#include <stdio.h>
extern int abs(int num);

int main(void) {
    int size1 = 0, size2 = 0;
    int arr1 = 0, sum1 = 0;
    int arr2[100] = { 0 }, sum2 = 0;

    scanf("%d %d", &size1, &size2);     // ������������ĳ���
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1);
        sum1 += arr1;                   // ���벢�ۼ�����1�ĺ�
    }
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);          // ��������2
    }

    // �Ҳ���С�ĺ�
    int left = 0, right = 0;            // ����
    int lindex = 0, rindex = 0;         // ��¼��������
    int min = sum1;

    for (left = 0; left < size2; left++) {
        sum2 = arr2[left];
        for (right = left + 1; right <= size2; right++) {
            if (abs(sum2 - sum1) < min) {
                min = abs(sum2 - sum1); // �жϲ�ֵ��С�͸��������¼
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


/* BC157 �������� */
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

    // ��ȫ������
    num = makePrime(num);

    // �жϻ�����
    if (isPrime(num)) {
        printf("prime\n");
    }
    else {
        printf("noprime\n");
    }

    return 0;
}


/* BC158 [NOIP1999]������ */
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
    for (lenght = 1; str[lenght - 1]; lenght++) {    // Ԥ��һ��λ�ø���λ
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
        // ��λ
        if ((arr[i] + reverse[i]) / n != 0) {
            ++arr[i - 1];
            arr[i] = arr[i] + reverse[i] - n;
        }
        // ����λ
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

    scanf("%d", &n);    // ����λ��
    scanf("%s", str);   // ����

    // �ַ�ת������
    strChangeNum();

    while (!isPrime()) { // �ǻ�����ʱ�˳�ѭ��
        // ����
        reverseNum();

        //���
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


/* BC159 ���ӵ����� */
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

        // �ж� ��Ԫ�صĿ�ƽ�����ƽ���� �� ��ԭ���� �Ƿ����
        if ((temp *= temp) != arr[i] && arr[i] > max)
            max = arr[i];
    }

    printf("%d", max);

    return 0;
}


/* BC160 Сq������ */
#include <stdio.h>
typedef long long ll;

int main() {
    ll t = 0, n = 0;
    ll sum = 0, num = 0;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        sum = num = 0;

        while (n) {      // f(n) �Ľ����n�Ķ�����λ��1�ĸ���
            if (n & 1) {
                sum++;
            }
            n >>= 1;
        }
        for (int j = 0; j < sum; j++) {
            num = num * 2 + 1;  // n����СֵΪsum��2^(sum-1) + 1
        }
        printf("%lld %lld\n", sum, num);
    }
    return 0;
}


/* BC161 �󼪴���������Լ� */
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


/* BC162 ţţ�������ж� */
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


/* BC163 ţţ���滻 */
#include <stdio.h>

int main() {
    int n = 0;
    char src1 = 0, dest1 = 0;
    char src2 = 0, dest2 = 0;
    char str[200] = { 0 };

    scanf("%d %c %c %c %c", &n, &src1, &dest1, &src2, &dest2);
    scanf("%s", str);

    int ptr1 = 0, ptr2 = 0;
    if (str[ptr1] == src1)      // �ȴ���õ�һ��
        str[ptr1] = dest1, ptr1++;
    while (ptr2 < n)
    {
        if (str[ptr1] == src1)  // ptr1�ӵڶ�����ʼ
            str[ptr1] = dest1;

        if (str[ptr2] == src2)  // ptr2�ӵ�һ����ʼ
            str[ptr2] = dest2;

        ptr1++, ptr2++;
    }

    printf("%s", str);
    return 0;
}


/* BC164 ţţ����Ҷõ���� */
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


/* BC165 ţţ��10���� */
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

        sum_0 = sum_1 = 0;   // ÿ�ζ�Ҫ����

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

/* BC166 С������̨�� */
#include<stdio.h>

int fib(int num)
{
    if (num <= 1)
        return 1;

    return fib(num - 1) + fib(num - 2);
}

int main(void)
{
    int n = 0;       // ˵���˾���һ��쳲���������

    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}


/* BC167 ����ʵ�ּ���һ�����Ľ׳� */
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