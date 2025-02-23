main()
{
  int a[10];
  int i,max=0,min=0;

  printf("enter a 10 number");
       for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

  for(i=0;i<=9;i++)
  {
      if(max<a[i])
        max=a[i];
      if(min>a[i])
        min=a[i];
  }
  printf("%d%d",max, min );


}
