#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10],b[10];
    int c,d;
    printf("enter the first word");
    scanf("%s",&a);
    printf("enter the second word");
    scanf("%s",&b);
    c=strlen(a);
    d=strlen(b);
    if(c>d)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
}
