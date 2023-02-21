#include<stdio.h>

int b_sort(int a1[],int n1)
{
	int t;
	for(int i=0;i<(n1-1);i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	return a1;
}

void main()
{
    int a[50];
    int n,val,pos=0;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter value to search:");
    scanf("%d",&val);
	a=b_sort(a,n);
    int lb=0,ub=n-1;
    int mid=0;
    while(ub>=lb)
    {
        mid=((lb+ub)/2);
        if(a[mid]==val)
        {
            pos=1;
            break;
        }
        else if(a[mid]>val)
        {
            ub=mid-1;
        }
        else 
        {
            lb=mid+1;
        }
    }
    if(pos==0)
    {
        printf("Not found");
    }
    else
    {
        printf("Position of element is: %d",mid+1);
    }
}
