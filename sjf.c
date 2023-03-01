#include <stdio.h>

void atsort(int a[],int b[],int n)
{
	int t,t1,min,pos;
	for(int i=0; i<n-1;i++)
	{
		for(int j =0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t= b[j];
				b[j]=b[j+1];
				b[j+1]=t;

				t1= a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
			}
		}
	}
	min = b[0],pos=0;
	for(int i =1;i<n;i++)
	{
		if(b[i]<min)
		{
			min = b[i];
			pos = i;
		}
	}
	if(a[pos]>a[0])
	{
		int t,t1;
		for(int i=1; i<n-1;i++)
		{
			for(int j =1;j<n-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
					t= b[j];
					b[j]=b[j+1];
					b[j+1]=t;
	
					t1= a[j];
					a[j]=a[j+1];
					a[j+1]=t1;
				}
			}
		}
	}
}

void main()
{
    int i, p, arr[10], bur[10], ct[10], tat[10], wt[10];
    printf("Enter the number of processes: ");
    scanf("%d", &p);
    for(i=0;i<p;i++)
    {
       printf("Enter the arrival time: ");
       scanf("%d", &arr[i]);
       printf("Enter the burst time: ");
       scanf("%d", &bur[i]);
    }
	atsort(arr,bur,p);
	for(i=0;i<p;i++)
    {
		ct[i]=ct[i-1]+bur[i];
		tat[i]=ct[i]-arr[i];
		wt[i]=tat[i]-bur[i];
    }
	printf("Process\t\tArrival\t\tBurst\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time\n");
	for(i=0;i<p;i++)
    {
		printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n", i+1, arr[i], bur[i], ct[i], tat[i], wt[i]);
    }
}