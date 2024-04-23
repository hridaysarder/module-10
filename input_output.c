#include<stdio.h>
#include<string.h>
int main()
{
    char a[12];
    // scanf("%s",&a);
    // gets(a);
    fgets(a,12,stdin);
    printf("%s",a);
    return 0;
}