
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char b[50];
    int i,count=1,c;
    printf("enter the string");
    scanf("%s",b);
    c=strlen(b);
    for(i=0;i<=c;i++)
    {
    if(b[i]=='.')
    {
        count=count+1;
    }
    }
    printf("the total no of lines in paragraph is %d",count);
}
