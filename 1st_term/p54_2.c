// p54_2: calculate square of triangle
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("�c�̒�������� > "); scanf("%f", &x);
   
    printf("���̒�������� > "); scanf("%f", &y);

    float s = x * y;

    // printf("�����`�̖ʐ�s = %9.4f \n", s);

    if (s < 100){
        printf("��");
    } else if (s < 200){
        printf("��");
    } else {
        printf("��");
    }

    return 0;

}


/*
���� :

    �c�̒�������� > 25
    ���̒�������� > 4

�o�� : 

    ��
    
*/
