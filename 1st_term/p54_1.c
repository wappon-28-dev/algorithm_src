// p54_1: calculate square of triangle
#include <stdio.h>
#include <math.h>

int main(void) {
    
    double a, b, c;
    
    printf("�O�p�`��1��a�����  > "); scanf("%lf", &a);
    printf("���̑���1��b�����  > "); scanf("%lf", &b);
    printf("�c���1��c�����    > "); scanf("%lf", &c);

    double s = (a + b + c)/2.0;
    double square = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("�O�p�`�̖ʐρF %f", square);

    return 0;

}


/*
���� :

    �O�p�`��1��a�����  > 3
    ���̑���1��b�����  > 4
    �c���1��c�����    > 5

�o�� : 

    �O�p�`�̖ʐρF 6.000000
    
*/
