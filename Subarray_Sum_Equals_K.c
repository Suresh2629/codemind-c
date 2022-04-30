#include<stdio.h>
int main()
{
    int x[20],n,count=0,i,j,k,sum=0;
    scanf("%d%d",&n,&k);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]==k)
        {
            count++;
            continue;
        }
        sum=x[i];
        for(j=i+1;j<n;j++)
        {
            sum=sum+x[j];
            if(sum==k)
            {
                count++;
                break;
            }
            else if(sum>k)
            break;
        }
    }
    printf("%d",count);
    return 0;
}