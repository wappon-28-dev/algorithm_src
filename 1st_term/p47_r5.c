// p47_r5: practice `while` syntax
#include <stdio.h>

int main(void) {

    int target = 1000;
    int amount, total, days;

    do {
        printf("1日に何円貯金する？ > "); scanf("%d", &amount);
        total += amount;
        days++;
    } while (total <= target);
        printf("%d 円貯まるまでに...\n", total);
        printf("日数: %d 日\n", days);
        printf("平均: %6.1f 円/日\n", float(total));

    return 0;

}

/*
入力：

    1日に何円貯金する？ > 500
    1日に何円貯金する？ > 200
    1日に何円貯金する？ > 600

出力：

    1300 円貯まるまでに...
    日数: 3 日
    平均: 1300.0 円/日

*/
