main()
{
int i,a,b;
printf("enter a number ");
scanf("%d%d",&a,&b);
for(a=a+1::b=b-1;a<b;a++)
    {
        for(i=a;i<b;i++)

             if(a%i==0)
                break;
        printf("%d",i);

    }
}

