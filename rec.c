void nat(int);
main(){
    int n;
    scanf("%d",&n);
    nat(n);
}

void nat(int a)
{
    if(a>0)
    {

        printf("%d",a);
        nat(a-1);
    }
}
