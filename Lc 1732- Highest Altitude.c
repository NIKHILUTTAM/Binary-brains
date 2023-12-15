#include<conio.h>
#include<stdio.h>
void main()
{
    int a[1001],i,n,l ;
    printf("Enter the total no. of Atitudes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Altitude %d:",i+1);
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if (l<a[i])
        {
            l=a[i];
        }
    }
    printf("Highest Altitude is %d",l);
    getch();
}