#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    c=a+b;
    if(c%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
}
