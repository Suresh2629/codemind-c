#include<stdio.h>
int main()
{
    int t,i,sum,rem,n,r;
    scanf("%d",&t);
    
    while(t-->0)
    {
        scanf("%d",&n);
        sum=0;
        r=n;
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(sum==r)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}