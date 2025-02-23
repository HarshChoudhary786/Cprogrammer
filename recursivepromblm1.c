/* write a program recursive to print sq of first n natural no.*/
int sum(int a)
{

if(a==0)
     return 0;
    return a%10 + sum(a/10);


}

int sum(int);
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum(n));

}
