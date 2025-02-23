
#include<stdio.h>
void main()
{
    int num,cub,i,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
         printf("cubes %d \n",cub=i*i*i);
           sum=sum+cub;


    }
     printf("sum of cubes =%d ",sum);
}
