#include<stdio.h>
#include<conio.h>
void main()
{
    int a[11],i,j,temp;
    printf("enter the numbers");
    for(i=0;i<=10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   printf("big=%d",a[10]); 
}
