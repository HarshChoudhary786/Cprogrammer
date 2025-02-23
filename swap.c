main()
{
    int a[5],i,t;
    printf("enter a  elements");
     for(i=0;i<=4;i++)
       scanf("%d",&a[4]);

      for(i=0;i<4;i+2)
      {
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
      }
          printf("%d\t%d",a[i],a[i+1]);





}
