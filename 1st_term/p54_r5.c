// p54_r5: calculate sum
#include <stdio.h>

int main(void) {

    int length = 10;
    int sumOdd, sumEven;
    int i, j;

    for (i = 1; i <= length; i += 2){
        sumOdd += i;
    }
    
    for (j = 0; j <= length; j += 2){ 
        sumEven += j;
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
