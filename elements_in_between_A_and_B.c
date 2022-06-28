#include<stdio.h>
int main()
{
    int n,a[50],s,e,sum=0,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d %d",&s,&e);
    for(i=0;i<n;i++)
    {
        if(a[i]>=s && a[i]<=e)
        {
            flag=1;
            printf("%d ",a[i]);
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    
}