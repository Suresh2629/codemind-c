#include<stdio.h>
int main()
{
    int x[20],i,j,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]!=0)    
        {
            x[j++]=x[i];
        }
    }
    for(i=j;i<n;i++)
    {
        x[i]=0;
    }
    for(i=0;i<n;i++)
    printf("%d ",x[i]);
    return 0;
}