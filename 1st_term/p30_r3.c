// p30_r3: calculate average with int, float
#include <stdio.h>

int main(void) {
    
    int n = 4;
    int sum = 10;

    float averageWithInt = sum / n;
    float averageWithFloat = (float)sum / (float)n;
    
    printf("int  �^�ł̕��ϒl : %f\n", averageWithInt);
    printf("float�^�ł̕��ϒl : %f\n", averageWithFloat);

    return 0;

}


/*
�o�� : 

    int  �^�ł̕��ϒl : 2.000000
    float�^�ł̕��ϒl : 2.500000

*/
