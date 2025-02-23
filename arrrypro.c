main()
{

    int a[5],i,sumeven=0,sumodd=0;
    printf("enter a elemnts");
      for(i=0;i<=4;i++)
     scanf("%d",&a[i]);

         for(i=0;i<=4;i++)
            if(a[i]/2==0)
            {


            sumeven=sumeven+a[i];
            printf("%d",sumeven);
            }
            else
            {


                sumodd=sumodd+a[i];

         printf("%d",sumodd);
            }


}
