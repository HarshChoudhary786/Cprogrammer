main()
{

    int a[5],i,sum=0;
    printf("enter a number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
 for(i=0;i<5;i++)
     {
         if(a[i]%2==0)
            sum=sum+a[i];
     }

printf("%d",sum);

}
