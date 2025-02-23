int prime(int a , int b ,int c)
{
     int i;
      for(c=a+1;c<b-1;c++)
     for(i=2;i<a;i++)
        if(a%i==0)
        return 0;

}



main()
{

int prime(int ,int , int);
int n,m,x;
scanf("%d%d",&n,&m);
prime(n,m,x);
printf("%d",x);

}
