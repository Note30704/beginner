#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int answer = 0;
    int haveChance = 7;                 //기회
    int correct = rand() % 100 +1;      //랜덤 정답

    //업다운 게임
    
    while(haveChance > 0)
    {
        printf("*** Welcome To UP&DOWN ***\n");
        printf("숫자를 입력하세요. (1~100)\n");    //숫자를 입력하세요
        printf("남은 기회는 %d 번\n", haveChance--);
        scanf("%d", &answer);                //숫자를 스캔
    
        if (answer == correct)
        {
            printf("* 정답입니다 *\n");
            break;
        }
        else if (answer > correct)
        {
            printf("Down!!\n");
        }
        else if (answer < correct)
        {
            printf("UP!\n");
        }
        else
        {
            printf("오류입니다.\n");
        }

        if (haveChance == 0)
        {
            printf("실패입니다.\n");
            printf("정답은 %d 였습니다.T.T\n", correct);
            break;
        }
    }


    return 0;
}