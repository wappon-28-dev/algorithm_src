// p31_r4: calculate square of rectangle via scanf
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("�c�̒�������� > "); scanf("%f", &x);
   
    printf("���̒�������� > "); scanf("%f", &y);

    float s = x * y;

    printf("�����`�̖ʐ�s = %9.4f ", s);

    return 0;

}


/*
���� :

    �c�̒�������� > 2.5
    ���̒�������� > 4

�o�� : 

   �����`�̖ʐ�s = 10.0000

*/
