main()
{

    int num[7],i,sumev=0,sumodd=0;
    printf("enter a 8 integers number");
        for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
for(i=0;i<=7;i++)
    if(num[i]%2==0)

      sumev=sumev+num[i];
else
      sumodd=sumodd+num[i];

      printf("%d",sumev);
      printf("%d",sumodd);
}
