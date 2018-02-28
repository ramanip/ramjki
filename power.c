#include<stdio.h>
#include<conio.h>
void main()
{

int a=1,i,j,flag=0,b;
scanf("%d",&b);
for(i=1;i<=b;i++)
{
for(j=1;j<=i;j++)
{
    a=a*2;

if(b==a)
{
flag=1;
}
}
}
if(flag==1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
