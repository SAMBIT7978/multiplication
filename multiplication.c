#include<stdio.h>
 main()
{
	int n,i,r;
	printf("enter a number for table");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		r=n*i;
		printf("%d*%d=%d\n",n,i,r);
	}
}
