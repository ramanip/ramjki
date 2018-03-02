#include<stdio.h>
#include<conio.h>
void main()
{
    int b[11],i,j,c;
    printf("enter the numbers");
    for(i=0;i<=10;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if(b[i]>=b[j])
            {
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
    }
   printf("big=%d",b[10]); 
}
