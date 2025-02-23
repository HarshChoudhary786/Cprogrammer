#include<stdio.h>
main()
{
	int i,j,n;
	int ch=65;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   for(j=0;j<i+1;j++)
	   {
	   	printf("%c",ch);
	   	ch++;
	   }
	   printf("\n");
    }
}
