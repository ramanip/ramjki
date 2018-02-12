#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before swapping  %d %d \n",a,b);
    swap(a,b);
    printf("after swapping %d %d \n", a,b);
}
void swap(int i,int j)
{
    int k;
    i=j;
    j=k;
    i=k;
    printf("swap number is  %d %d \n",i,j);
    
}
