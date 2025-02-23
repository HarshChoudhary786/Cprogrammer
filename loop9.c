main()
{
    int prime(int);
    int n;
    scanf("%d",&n);
   if(prime(n))
       printf("prime");
   else
    printf("not prime");

}

int prime(int n)    /*define*/
{
 int i;
 for(i=2;i<n;i++)
    if(n%i==0)
            return 0;
            return 1;

}
