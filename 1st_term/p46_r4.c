// p46_r4: practice `while` syntax
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int main(void) {

    int num;
    int ans = getRandom();

    printf("���͂Ȃ�ł���H > ");
    scanf("%d", &num);
    while(num != ans){
        if (num > ans){
            printf("�����Ə������Ȃ��I\n");
        } else {
            printf("�����Ƒ傫���Ȃ��I\n");
        }
        printf("������x������ > "); scanf("%d", &num);
    }

    printf("������I�I�I�@������, %d �ł����I�I�I", ans);

    return 0;

}

/*
���́F

    ���͂Ȃ�ł���H > 15

�o�́F

    �����Ə������Ȃ��I

*/
