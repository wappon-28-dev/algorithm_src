// p42_r1: create if architecture with conditions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int waitAnswer(){
    int num;
    printf("�ǁ[��Ȑ��ł���H�H�H (0 - 9) > ");
    scanf("%d", &num);
    return num;
}

int main(void) {
    
    int answer = getRandom();
    int num = waitAnswer();

    if (num >= 0 && num <=9){
        if(num == answer){
            printf("������!!!  �����̉^���͐��ꁙ\n");
        } else {
            printf("�͂���...\n");
            printf("���Ȃ݂ɓ����� %d �ł� (��) ", answer);
        }
    } else {
        printf("�������l������!!! \n�o������!!! \n\n");
        main();
    }


    return 0;

}


/*
���� :

    �ǁ[��Ȑ��ł���H�H�H (0 - 9) > 1

�o�� : 

    �͂���...
    ���Ȃ݂ɓ����� 0 �ł� (��)

*/
