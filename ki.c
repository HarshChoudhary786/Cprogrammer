main()
{

    int A[3][3],B[3][3],c[3][3],i,j;
    printf("enter A matrix");
        for(i=0;i<2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&A[i][j]);

       printf("enter B matrix");
        for(i=0;i<2;i++)
        for(j=0;j<=2;j++)
     scanf("%d",&B[3][3]);


     for(i=0;i<2;i++)
     for(j=0;j<2;j++)
     {
         c[i][j]=A[i][j]+B[i][j];
         printf("%d",c[i][j]);
     }


     printf("\n ");

     getch();

}



