#include<stdio.h>
void main()
{

int i,j,n,m;
printf("Enter a two value ");
scanf("%d%d",&n,&m);

for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        printf("*");

    }
    printf("\n");
}
}
