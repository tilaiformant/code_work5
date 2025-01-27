#include <stdio.h>
int main()
{   int a;
    int b;
    int c;
    printf("輸入 a 值 : ");
    scanf("%d",&a);
    printf("輸入 b 值 : ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;
    printf("a = %d,b = %d\n",a,b);

    getchar();
    return 0;

}