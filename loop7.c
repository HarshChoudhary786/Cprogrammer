main()
{

    int marks;
    printf("enter a number");
   scanf("%d",&marks);
    switch (marks)
{
    case 91...100:
        printf("A");
        break;

    case 81...90:
        printf("B");
        break;

    case 71...80:
        printf("C");
        break;

    case 61...70:
        printf("D");
        break;
    case 51...60:
        printf("E");
        break;

    default :
        printf("invalid input");
    }
}


