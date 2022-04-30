#include<stdio.h>
int sort(int *arr1,int n)
{
	int temp=0,i,j;
	for(i=1;i<n;i++)
	{
		temp=arr1[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp>arr1[j])
			{
				arr1[j+1]=temp;
				break;
			}
			else
			{
				arr1[j+1]=arr1[j];
			}
		}
		if(j==-1)
		{
			arr1[0]=temp;
		}
	}
	return 0;
}
int main()
{
    int n,arr[50],arr1[50],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i]*arr[i];
    }
    sort(arr1,n);
    for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
}