// p42_ren: create multi `if` architecture
#include <stdio.h>

int adultFee = 200;

int main(void) {
    int age;
    int fee;

    printf("�N������ > "); scanf("%d", &age);
    
    if (age < 6){

        int withParent;
        printf("�����҂͂��܂����H (���� : 0, ���Ȃ� : 1) > ");
        scanf("%d", &withParent);
        if (withParent == 0){
            fee = adultFee / 2;
        } else {
            fee = 0;
        }

    } else if (age < 12){
        fee = adultFee / 2;
    } else {
        fee = adultFee;
    }

    printf("������, %d�~�ł�", fee);

    return 0;

}


/*
���́F

    �N������ > 12

�o�� : 

    ������, 200�~�ł�

*/
