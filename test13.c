#include <stdio.h>
int main()
{
    int i;
    int sc[5];

    sc[0] = 5;
    sc[1] = 15;
    sc[2] = 25;
    sc[3] = 35;
    sc[4] = 45;
    for (i = 0; i < 5; i++)
        printf("sc[%d] = %d\n", i, sc[i]);

    getchar();
    return 0;

}