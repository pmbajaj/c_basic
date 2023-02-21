#include<stdio.h>
#include<stdlib.h>

void quicksort(int a[],int l,int r)
{
    int i,j,t,p;
    if(l<r)
    {
        p=l;
        i=l;
        j=r;
        while(i<j)
        {
            if(i==p)
            {
                if(a[p]<=a[j])
                {
                    j--;
                }
                else
                {
                    t=a[p];
                    a[p]=a[j];
                    a[j]=t;
                    p=j;
                }
            }
            if(j==p)
            {
                if(a[p]>a[i])
                {
                    i++;
                }
                else
                {
                    t=a[p];
                    a[p]=a[i];
                    a[i]=t;
                    p=i;
                }
            }
            if(i==j)
            {
                quicksort(a,0,p-1);
                quicksort(a,p+1,r);
            }
        }
    }
}

int main()
{
    int n;
    int* a;
    printf("Enter number of array elements: \n");
    scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));
  
    // Checking for memory allocation
    if (a == NULL) 
	{
        printf("Memory not allocated.\n");
    }
	else
	{
		printf("Enter array elements: \n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		quicksort(a,0,n-1);
		printf("Sorted array elements are: \n");
		for(int i=0;i<n;i++)
		{
			printf("%d \n",a[i]);
		}
		return 0;
	}
}