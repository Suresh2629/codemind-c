#include<stdio.h>
int main()
{
    int n,x[10]={0},r,i,found=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        r=n%10;
        x[r]++;
        n=n/10;
    }
    for(i=0;i<9;i++)
    {
        if(x[i]>1)
          {
              found=1;
              break;
          }
    }
    if(found==0)
       printf("Unique Number");
    else
       printf("Not Unique Number");
   return 0;
}