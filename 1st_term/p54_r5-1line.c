// p54_r5: calculate sum
#include <stdio.h>

int main(void) {

    int length = 10;
    int sumOdd, sumEven;
    int i;

    for (i = 0; i <= length; i++){
        if (i % 2 != 0){
            sumOdd += i;
        } else {
            sumEven += i;
        }
    }

    printf("1����%d�܂ł̊�̘a : %d\n", length, sumOdd);
    printf("1����%d�܂ł̋����̘a : %d\n", length, sumEven);

    return 0;

}

/*
�o�� : 

    1����10�܂ł̊�̘a : 25
    1����10�܂ł̋����̘a : 30

*/
