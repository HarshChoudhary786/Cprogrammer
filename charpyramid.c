#include<stdio.h>
void main()
{
	int i,j,n,p=1;

	 scanf("%d", &n);
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-i-1;j++)
	 	  {
	 	  	printf(" ");
	      }
	      for(j=0;j<i+1;j++)
	      {
	      	printf("%d", p);
	      	p++;
		  }
		 int q=i;
		 for(j=0;j<i;j++)
		 {
		 	printf("%d", q);
		 	q--;
		 }
	 printf("\n");

}
}
