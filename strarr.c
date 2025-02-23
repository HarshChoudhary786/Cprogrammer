#include<stdio.h>

struct book

{
    char name[20];
    int  pages;
    float price;
};

void main(){

struct book b[10];
int i;

printf("enter a name , no.  of pages , & price");
 for(i=0;i<10;i++)
 gets(b[i].name);
 scanf("%d%d",&b[i].pages,&b[i].price);

 printf("the inputs");
 for(i=0;i<10;i++)
 {
     printf("book name =%s",b[i].name);
     printf("no. of pages=%d",b[i].pages);
     printf("price=%f",b[i].price);
 }

getch();

}
