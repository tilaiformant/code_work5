#include <stdio.h>
int main()
{
    int score[10];
    float ave;
    int i,sum;
    i = 0;
    sum = 0;
    printf("輸入 0 代表輸入結束\n");
    
    do
    {
        printf("請輸入分數 ==> ");
        scanf("%d",&score[i]);
        sum += score[i];
    }  while (score[i++] > 0);
        ave = (float) sum / ( i - 1);
        printf("平均分數是 %6.2f \n",ave);
    getchar();
    return 0;

}