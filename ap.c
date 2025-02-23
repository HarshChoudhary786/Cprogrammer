main()
{
        int A[3][3],B[3][3],C[3][3],i,j;

         printf("Eenter  9 elements for first matrix");
          for(i=0;i<=2;i++)
             for(j=0;j<=2;j++)
              scanf("%d",&A[i][j]);

          printf("enter 9 elements for second  matrix");
           for(i=0;i<=2;i++)
              for(j=0;j<=2;j++)
              scanf("%d",&B[i][j]);

              for(i=0;i<=2;i++)
              {
              for(j=0;j<=2;j++)
                {
                 C[i][j]=A[i][j+[i][j];
                 printf("%d",C[i][j]);
              }

           printf("\n");
}

}
