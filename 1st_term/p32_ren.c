// p32_ren: calculate square of circle with pow
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void) {
    
    float r = 5;
    float s = PI * pow(r, 2.0);

    printf("�~�̖ʐ�s = %.3f", s);

    return 0;

}


/*
�o�� : 

   �~�̖ʐ�s = 78.540

*/
