// p31_ren: calculate average with int, float via scanf
#include <stdio.h>

int main(void) {
    
    int n, sum;

    printf("������� > "); scanf("%d", &n);

    printf("���v����� > "); scanf("%d", &sum);

    float averageWithInt = sum / n;
    float averageWithFloat = (float)sum / (float)n;
    
    printf("int  �^�ł̕��ϒl : %f", averageWithInt);
    printf("float�^�ł̕��ϒl : %f", averageWithFloat);

    return 0;

}


/*
���� :

    ������� > 2.5
    ���v����� > 4

�o�� : 

    int  �^�ł̕��ϒl : 2.000000
    float�^�ł̕��ϒl : 2.500000

*/
