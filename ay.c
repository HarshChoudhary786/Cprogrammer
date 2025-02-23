main()
{
    int n[10],i,sum=0;
    printf("enter a n numbers");
    for(i=0;i<=10;i++){
     scanf("%d",&n[i]);
    }
    for(i=0;i<=10;i++){
        sum=sum+n[i];

    }
printf("%d",sum);
}
