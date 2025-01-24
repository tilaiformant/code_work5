#include <stdio.h>
int main()
{   char *days[] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
    int tem[] = {25, 26, 28, 23, 24, 29, 27};
    int mymax = tem[0];
    int maxindex = 0;

    for (int i = 1; i < 7; i++ )
    {
        if (tem[i] > mymax)
        {
            mymax = tem[i];
            maxindex = i;
        }
    }
    
    printf("最高溫是在%s, 溫度是%d度\n",days[maxindex], mymax);
    getchar();
    return 0;

}