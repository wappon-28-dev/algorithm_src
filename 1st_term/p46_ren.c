// p46_ren: practice `while` syntax
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
    // return 5;
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int main(void) {

    int num = 0;
    int ans = getRandom();
    int loopingNum = 1;

    printf("���͂Ȃ�ł���H > ");
    scanf("%d", &num);
    while(num != ans){
        if (num > ans){
            printf("�����Ə������Ȃ��I\n");
        } else {
            printf("�����Ƒ傫���Ȃ��I\n");
        }
        printf("������x������ > "); scanf("%d", &num);
        loopingNum++;
    }

    printf("������I�I�I (%d���) ������, %d �ł����I�I�I", loopingNum, ans);

    return 0;

}

/*
���́F

    ���͂Ȃ�ł���H > 5

�o�́F

    ������I�I�I(1���) ������, 5 �ł����I�I�I

*/
