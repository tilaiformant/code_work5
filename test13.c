#include <stdio.h>
int main()
{  float high[7] = {30.0, 28.0, 19.0, 31.0, 33.0, 35.0, 32.0};
   float low[7] = {20.0, 21.0, 19.0, 22.0, 23.0, 24.0, 20.0};
   float avg[7];
   float maxtem = high[0], mintem = low[0];

   for (int i = 0; i < 7; i++)
   {
    avg[i] = (high[i] + low[i]) / 2.0;

    if (high[i] > maxtem)
    {
        maxtem = high[i];
    }

    if (low[i] < mintem)
    {
        mintem = low[i];
    }

   } 
    printf("最高溫 = %.1f\n",maxtem);
    printf("最低溫 = %.1f\n",mintem);
    printf("平均溫 = ");
    for (int i = 0; i < 7; i++)
    {
        printf("%5.1f", avg[i]);
    }
    printf("\n");
    getchar();
    return 0;

}