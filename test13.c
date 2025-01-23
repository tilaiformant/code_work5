#include <stdio.h>
int main()
{
    int score[5], sum = 0;
    float ave;

    printf("輸入數學成績(0~100) : ");
    scanf("%d",&score[0]);
    printf("輸入英文分數(0~100) : ");
    scanf("%d",&score[1]);
    printf("輸入國文成績(0~100) : ");
    scanf("%d",&score[2]);
    printf("輸入物理分數(0~100) : ");
    scanf("%d",&score[3]);
    printf("輸入化學分數(0~100) : ");
    scanf("%d",&score[4]);

    for (int i = 0; i < 5; i++)
    {
        sum += score[i];
    }
    ave = (float)sum / 5;
    printf("你的平均成績是: %.2f\n",ave);
    
    
    getchar();
    return 0;

}