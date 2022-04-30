#include<stdio.h>
int main()
{
    int x[20],i,j,s,e,sum=0,count=0;
    scanf("%d%d",&s,&e);
   
    
    for(i=s;i<=e;i++)
    {
        sum=0;
        for(j=i;j<=e;j++)
        {
            sum=sum+j;
            if(sum%2!=0)
               count++;
        }
    }
    printf("%d",count);
    return 0;
}