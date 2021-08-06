#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include "first.h"

int main(void) {
//    printf("Which nobody can deny!\n");
//    getRealSize();
//    bases();
//    talkback();
//    defines();
//      varwid();
//    skip2();
//    booksell();
    wheat();
    return 0;
}

void jolly() {
    printf("For he's a jolly good fellow!\n");
}

void bases() {
    int x = 100;
    printf("dec = %d;  octal = %o;  hex = %x\n", x, x, x);
    printf("dec = %d;  octal = %#o;  hex = %#x\n", x, x, x);

}

void getRealSize() {
    printf("int size = %lu\n", sizeof(int));
    printf("long size = %lu\n", sizeof(long));
    printf("short size = %lu\n", sizeof(short));
}

void talkback() {
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hi!What's your first name?\n");
    scanf("%s", name);
    printf("%s,what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also,your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
}

void defines() {
    printf("Some number limits for this system: \n");
    printf("Biggest int : %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double:%e\n", DBL_MAX);
    printf("Smallest normal float:%e\n", FLT_MIN);
    printf("float precision=%d digits\n", FLT_DIG);
    printf("float epsilon= %e\n", FLT_EPSILON);
}

void varwid() {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf("Enter a field width:\n");
    //输入字段宽度：6
    scanf("%d", &width);
    printf("The number is :**%*d**\n", width, number);
    printf("Now enter a width and a precision:\n");
    //输入8和3，代表字段宽度8，小数点后显示3位数字
    scanf("%d%d", &width, &precision);
    printf("Weight=%*.*f\n", width, precision, weight);
    printf("Done!\n");
}

void skip2() {
    int n;
    printf("Please enter three integers:\n");
    //跳过两个整数，把第3个整数拷贝给n
    scanf("%*d%*d%d", &n);
    printf("The last integer was %d\n", n);
}

void booksell() {
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for$%0.2f\n", BOOK, cost);
    printf("That is %.0f%% of list.", percent);
}

void wheat() {
    const double CROP = 2E16;//世界小麦年产谷粒数
    double current, total;
    int count = 1;
    printf("square       grains           total       ");
    printf("fraction of \n");
    printf("          added          grains            ");
    printf("world total\n");
    total = current = 1.0;//从第1颗谷粒开始
    printf("%4d  %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;//下一个方格翻倍
        total += current;//更新总数
        printf("%4d  %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);
    }

    printf("That's all.\n");
}
