#include<stdio.h>
int main()
{
    int n,a[50],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if((a[i]%2==0 and a[i+2]%2!=0) or (a[i]%2!=0 and a[i+2]%2==0))
        {
            if(a[i+1]%2!=0 or a[i+1]%2==0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}