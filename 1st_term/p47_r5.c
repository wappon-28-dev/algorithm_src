// p47_r5: practice `while` syntax
#include <stdio.h>

int main(void) {

    int target = 1000;
    int amount, total, days;

    do {
        printf("1���ɉ��~��������H > "); scanf("%d", &amount);
        total += amount;
        days++;
    } while (total <= target);
        printf("%d �~���܂�܂ł�...\n", total);
        printf("����: %d ��\n", days);
        printf("����: %6.1f �~/��\n", float(total));

    return 0;

}

/*
���́F

    1���ɉ��~��������H > 500
    1���ɉ��~��������H > 200
    1���ɉ��~��������H > 600

�o�́F

    1300 �~���܂�܂ł�...
    ����: 3 ��
    ����: 1300.0 �~/��

*/
