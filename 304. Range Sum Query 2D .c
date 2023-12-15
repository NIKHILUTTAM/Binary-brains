#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,r1,r2,c1,c2,sum=0;
    printf("enter the total no. of rows and column:-\n");
    printf("row:");
    scanf("%d",&r);
    printf("column:");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("the given array is:-\n ");
     for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nenter the details to calculate the sum of a region in a given 2D array:-");
    printf("\nenter starting block:");
    printf("\nrow:");
    scanf("%d",&r1);
    printf("column:");
    scanf("%d",&c1);
    printf("enter ending block:");
    printf("\nrow:");
    scanf("%d",&r2);
    printf("column:");
    scanf("%d",&c2);
    for(i=r1;i<=r2;i++)
    {
        for(j=c1;j<=c2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum is %d",sum);
    getch();
}
