#include<conio.h>
#include<stdio.h>
void main()
{
    int a[1000],i,j,n,t,c=0;
    printf("enter the total no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    t=0;
    for(t=1;t<=n;t++)
    {
        c=0;
       for(i=0;i<n;i++)
       {
        if (t!=a[i])
        {
            c++;
        }
        if(c==n)
        {
            printf("%d element is missing",t);
            break;
        }
       }
    }
    getch();
}
