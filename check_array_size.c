#include<stdio.h>
int main()
{
    char a[5];
    printf("%d\n",sizeof(a));
    printf("%d",sizeof(a)/sizeof(char));
    return 0;
}