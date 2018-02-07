#include<stdio.h>
int main()
{
 int i;
 int count=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!='\0'; i++)
 {
 if(str[i]==' ')
 {
   count++;
 }}
 printf("\nNumber of words in string : %d",count);
 return 0;
}
