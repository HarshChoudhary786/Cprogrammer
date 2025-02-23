main()
{

    int a[4],*p,i;
     p=&a[0];
     for(i=0;i<=4;i++)
        scanf("%d",p+i);
     for(i=0;i<=4;i++)
        printf("%d",*(p+i));

}
