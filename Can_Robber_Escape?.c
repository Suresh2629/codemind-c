#include<stdio.h>
int main()
{
    int n,X[20],odd=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&X[i]);
    
    for(i=0;i<n;i++)
    {
        if(X[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
    return 0;
}