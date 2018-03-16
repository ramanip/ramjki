#include <stdio.h>
int main()
{
	int n,c=1,d=1,i,t;
	printf("enter LIMIT");
	scanf("%d",&n);
         printf("\t%d\t%d",c,d);
	for(i=0;i<n-2;i++)
	{
          t=c+d;
          printf("\t%d",t);
           c=d;
           d=t;
	}
	return 0;
}
