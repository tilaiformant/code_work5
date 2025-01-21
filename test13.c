#include <stdio.h>
int main()
{
    int size;
    int a[] = {1, 2, 3, 4};
    
    size = sizeof(a) / sizeof(a[0]);
    printf("陣列 a 的元素個數 = %d\n",size);
    getchar();
    return 0;

}