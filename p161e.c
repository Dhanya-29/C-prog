#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no. of rows to be printed:\n");
    scanf("%d",&num);
    pattern(num);
    return 0;
}
pattern(rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(int j=i;j<=i;j++);
        {
            printf("%d",i);
        }
    printf("\n");
    }
    for(int i=rows-1;i>=1;i--)
    {
        for(int space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(int j=i;j<=i;j++);
        {
            printf("%d",i);
        }
    printf("\n");
    }
}
