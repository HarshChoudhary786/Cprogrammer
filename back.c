main(){
    int a[3][3],b[3][3],c[3][3],i,j;
         printf("enter A matrix ");
            for(i=0;i<=2;i++)
                for(j=0;j<=2;j++)
         scanf("%d",&a[i][j]);


         printf("enter B matrix");
            for(i=0;i<=2;i++)
                 for(j=0;j<=2;j++)
         scanf("%d",&b[3][3]);





            for(i=0;i<=2;i++){
                 for(j=0;j<=2;j++)
{


                c[i][j]=a[i][j]+b[i][j];
             printf("%d",c[i][j]);
            }
            printf("\n ");
}

}
