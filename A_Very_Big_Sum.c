#include<stdio.h>
int main()
{
    long long int x[20],n,i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("%lld",sum);
    return 0;
}