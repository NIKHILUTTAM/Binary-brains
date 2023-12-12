#include<conio.h>
#include<stdio.h>
void main()
{
    int n,x,r,sum=0;
    printf("enter the no.:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(x==sum)
     printf("TRUE");
    else
     printf("FALSE");
}
